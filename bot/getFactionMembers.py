import mariadb
import re
import sys
import config

try:
    conn = mariadb.connect (user=config.DB_USER, password=config.DB_PASS, host=config.DB_HOST, port=config.DB_PORT, database=config.DB_NAME)
except mariadb.Error as err:
    print("Connection error")

armalife = conn.cursor()
if len(sys.argv)<2:
    print("Select: ctrg - cop - med - reb")
    
else: 
    if (sys.argv[1] == "ctrg"): 
        armalife.execute("SELECT pid,name,coplevel FROM players WHERE coplevel='5' OR coplevel='6' OR coplevel='7'")
        for pid,name,coplevel in armalife:
            print(f"{{{pid}}} {coplevel} {name}")

    elif (sys.argv[1] == "cop"): 
        armalife.execute("SELECT pid,name,coplevel FROM players WHERE coplevel!='0' AND coplevel!='5' AND coplevel!='6' AND coplevel!='7'")
        for pid,name,coplevel in armalife:
            print(f"{{{pid}}} {coplevel} {name}")

    elif (sys.argv[1] == "med"): 
        armalife.execute("SELECT pid,name,mediclevel FROM players WHERE mediclevel!='0'")
        for pid,name,mediclevel in armalife:
            print(f"{{{pid}}} {mediclevel} {name}")

    elif (sys.argv[1] == "reb"): 
        armalife.execute("SELECT pid,name FROM players WHERE civ_licenses LIKE '%[`license_civ_rebel`,1]%'")
        for pid,name in armalife:
            print(f"{{{pid}}} {name}")

    else: print("Select: ctrg - cop - med - reb")

