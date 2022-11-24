import re
import price
import pandas as pd
import config
import mariadb
import os


def connect():
    try:
        conn = mariadb.connect (user=config.DB_USER, password=config.DB_PASS, host=config.DB_HOST, port=config.DB_PORT, database=config.DB_NAME)
    except:
        print("Connection error")
    armalife=conn.cursor()
    return armalife

def gunToMoney(inventory):
    resp = 0
    for nome in price.armi:
        if nome in inventory:
            resp += price.armi[nome]
    return resp

def licenseToMoney(allLicense):
    resp = 0
    for licenza in price.licenze:
        if licenza in allLicense:
            resp += price.licenze[licenza]
    return resp

def vehicleToMoney(mezzo):
    return price.veicoli[mezzo]

def containerToMoney(cn):
    return price.containers[cn]

def houseSizeToMoney(sizeC):
    try:
        return price.houses[sizeC]
    except:
        return price.houses[len(price.houses)]

def addVehiclesToOne(df):
    dbLife.execute('SELECT pid,classname FROM vehicles WHERE side="civ" AND pid='+df.iat[0,0])
    for pid, classname in dbLife:
        df.loc[pid,'spent'] += vehicleToMoney(classname)
    return df

def addVehicles(df):
    dbLife.execute('SELECT pid,classname FROM vehicles WHERE side="civ"')
    for pid, classname in dbLife:
        df.loc[pid,'spent'] += vehicleToMoney(classname)
    return df

def addContainerAndInv(df):
    dbLife.execute("SELECT pid, classname, gear FROM containers")
    playerWithHouse=[]
    for pid, classname, gear in dbLife:
        df.loc[pid,'spent'] += gunToMoney(gear) + containerToMoney(classname)
        playerWithHouse.append(pid)
    
    for pid in list(set(playerWithHouse)):
        df.loc[pid,'spent']+=houseSizeToMoney(playerWithHouse.count(pid))
    return df

def addContainerAndInvToOne(df):
    dbLife.execute('SELECT pid, classname, gear FROM containers WHERE pid='+df.iat[0,0])
    playerWithHouse=[]
    for pid, classname, gear in dbLife:
        df.loc[pid,'spent'] += gunToMoney(gear) + containerToMoney(classname)
        playerWithHouse.append(pid)
    
    for pid in list(set(playerWithHouse)):
        df.loc[pid,'spent']+=houseSizeToMoney(playerWithHouse.count(pid))
    return df

def licenseToText(licenze):
    resp=""
    lista_licenze=licenze.replace("`","").split("],[")
    for licenza in lista_licenze:
        if ",1" in licenza and not "rebel" in licenza:
            nomeLicenza=licenza.split("_")
            resp+=(nomeLicenza[2][:len(nomeLicenza[2])-2])+","
    if resp!="":

        return resp[:len(resp)-2].replace(",1]","")
    else:
        return "None"

def isRebel(licenze):
    if "[`license_civ_rebel`,1]" in licenze:
        return "1"
    else: 
        return "0"

def setAllPlayers():
    dbLife.execute(
        "SELECT pid,name,cash,bankacc,civ_gear,civ_licenses,coplevel,mediclevel FROM players")
    risultato = pd.DataFrame(
        columns=['steamID', 'name', 'money', 'spent', 'license', 'coplevel', 'mediclevel', 'rebel'])
    for  pid, name, cash, bankacc, civ_gear, civ_licenses,coplevel,mediclevel in dbLife:
        new_row = {'steamID': pid,
                   'name': name,
                   'license':licenseToText(civ_licenses),
                   'money': int(cash+bankacc),
                   'spent': gunToMoney(civ_gear)+licenseToMoney(civ_licenses), 
                   'coplevel': int(coplevel),
                   'mediclevel': int(mediclevel),
                   'rebel':int(isRebel(civ_licenses))
                   }
        risultato.loc[pid] = new_row
    risultato = addVehicles(risultato)
    risultato = addContainerAndInv(risultato)
    return (risultato)        

def setAllGangs(players):
    dbLife.execute("SELECT owner,name,members FROM gangs")
    risultato = pd.DataFrame(
        columns=['owner', 'name', 'membersName', 'gangMoney', 'gangSpent'])
    for owner, name, members in dbLife:
        members = re.findall(r'[0-9]{17}', members)
        membersName = list(map(lambda x: players.loc[x, "name"], members))
        gangMoney = sum(
            list(map(lambda x: int(players.loc[x, "money"]), members)))
        gangSpent = sum(
            list(map(lambda x: (players.loc[x, "spent"]), members)))
        new_row = {'name': name,
                   'membersName': membersName,
                   'gangMoney': gangMoney,
                   'gangSpent': gangSpent
                   }
        risultato.loc[owner] = new_row
    return risultato


def load():
    df = (setAllPlayers())
    dfGang = setAllGangs(df)
    return df,dfGang

def loadAndSave():
    statsDirPath = os.path.join(os.path.dirname(os.path.realpath(__file__)),"stats")
    playersFilePath = os.path.join(statsDirPath,"player.json")
    gangsFilePath = os.path.join(statsDirPath,"gang.json")
    df = (setAllPlayers())
    df.to_json(playersFilePath, orient='records')
    dfGang=setAllGangs(df)
    dfGang.to_json(gangsFilePath, orient='records')
    return df,dfGang

def apiGetPlayerBySID(sid):
    dbLife.execute(
        "SELECT pid,name,cash,bankacc,civ_gear,civ_licenses,coplevel,mediclevel FROM players WHERE pid="+sid)
    risultato = pd.DataFrame(
        columns=['steamID', 'name', 'money', 'spent', 'license', 'coplevel', 'mediclevel', 'rebel'])
    for  pid, name, cash, bankacc, civ_gear, civ_licenses,coplevel,mediclevel in dbLife:
        new_row = {'steamID': pid,
                   'name': name,
                   'license':licenseToText(civ_licenses),
                   'money': int(cash+bankacc),
                   'spent': gunToMoney(civ_gear)+licenseToMoney(civ_licenses), 
                   'coplevel': int(coplevel),
                   'mediclevel': int(mediclevel),
                   'rebel':int(isRebel(civ_licenses))
                   }
        risultato.loc[pid] = new_row
    risultato = addVehiclesToOne(risultato)
    risultato = addContainerAndInvToOne(risultato)
    return risultato.to_json(orient='records')

def apiGetAllPlayers():
    df = (setAllPlayers())
    return df.to_json(orient='records')


dbLife = connect()
if __name__ == '__main__':
    print(apiGetPlayerBySID("76561197962072117"))