/*
    File: fn_rules.sqf
    Author: XEDOM
*/
disableSerialization;
["",0,0.2,10,0,0,8] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='6' shadow='0'>SimpleLife Regolamento</t><br /><br />";

_message = _message + "<t align='left'>";
_message = _message + "Regolamento generale" + "<br /><br />";
_message = _message + "1. Non commettere RDM (Random DeathMatch) o VDM (veichle DeathMatch)." + "<br />";
_message = _message + "2. Non tamponare altri veicoli cercando un esplosione." + "<br />";
_message = _message + "3. Non Rapinare le persone vicino gli ATM." + "<br />";
_message = _message + "4. È assolutamente vietato l’uso di Hack / Glitch / Bug (es: duplicare armi, soldi ecc)." + "<br />";
_message = _message + "5. È severamente vietato fare Alt F4 nel perdurare di un azione." + "<br />";
_message = _message + "6. I medici sono i tutori della salute civile, perciò devono essere tutelati. De facto sono esenti da ogni azione dunque non possono essere uccisi, rapinati, bloccati o derubati." + "<br />";
_message = _message + "7. Vietato bloccare o rubare il veicolo di un Medico." + "<br />";
_message = _message + "8. Il rispetto deve essere alla base della convivenza, chiunque venga insultato fuori rp è esortato a segnalare nel server TS il problema." + "<br />";
_message = _message + "9. Non è tollerato il trolling, soprattutto se mirato a far perdere tempo al prossimo." + "<br />";
_message = _message + "" + "<br />";

_message = _message + "Azioni" + "<br /><br />";
_message = _message + "1. Per iniziare un azione è necessario interagire dichiarando le proprie intenzioni in RP." + "<br />";
_message = _message + "2. La polizia, essendo tutrice della legge deve preferire una soluzione pacifica ad un contenzioso, solo in situazioni pericolose è possibile aprire il fuoco, dando inizio ad un azione." + "<br />";
_message = _message + "3. Nel caso in cui la polizia attivi le sirene, chiunque sia inseguito deve considerarsi all'interno di una nuova azione." + "<br />";
_message = _message + "4. Dal momento in cui non viene rispettato l'alt di chiunque vi stia minacciando, egli ha il permesso di dar inizio ad un azione." + "<br />";
_message = _message + "5. L'azione termina nel momento in cui, una delle due controparti dichiara Azione finita o Azione annullata (per irregolarità)." + "<br />";
_message = _message + "6. A fine azione è possibile fare respawn solamente in assenza di medici e col permesso dei vincitori." + "<br />";
_message = _message + "7. Alla fine dell'azione, la gang perdente dovrà dare tutto l'equipaggiamento(elmetti,giubbotti armi e cappelli, esclusa la divisa) alla parte vincente." + "<br />";
_message = _message + "8. Durante un inseguimento è possibile speronare per far andare fuori strada il veicolo inseguito o bloccarlo. (a proprio rischio)" + "<br />";
_message = _message + "9. Vietato entrare in un'azione iniziata prima di essere loggati nel server." + "<br />";
_message = _message + "10. Per disingaggiare si dovrà uscire dalla zona dell'azione di 500m e comunicare il disingaggio alla squadra avversaria." + "<br />";
_message = _message + "11. Se il server restarta durante un azione essa viene considerata vinta solo in caso di un grande vantaggio da parte di una delle 2 fazione scontranti, nel caso di parità l'azione verrà considerata patta e quindi annullata." + "<br />";
_message = _message + "12. In caso di RAID della propria casa/base è vietato sloggare e riloggare nella propria abitazione." + "<br />";
_message = _message + "13. Nel caso in cui si venga inseguiti è severamente vietato depositare il veicolo con il quale si sta scappando nel garage." + "<br />";
_message = _message + "" + "<br />";

_message = _message + "Regolamento della rapina alla banca o rapina alla stazione di servizio." + "<br /><br />";
_message = _message + "1. Nel raggio dell'azione è possibile aprire il fuoco in quanto considerato zona calda." + "<br />";
_message = _message + "2. I poliziotti che hanno preso parte all'azione in banca morendo, hanno il divieto piu' assoluto di ostacolare i rapinatori durante la vendita dei lingotti, al contrario dei poliziotti disingaggiati o appena entrati nel server ai quali è permesso intervenire." + "<br />";
_message = _message + "3. Le fazioni che non hanno preso parte all'azione hanno il divieto di ostacolare i rapinatori durante la vendita dei lingotti." + "<br />";
_message = _message + "</t><br />";

_message = _message + "<br /><a color='#00DFFF'>•</a> Sito web: <a href='https://github.com/AsYetUntitled/Framework' color='#56BDD6'> https://github.com/AsYetUntitled/Framework</a><br />";
_message = _message + "<a color='#00DFFF'>•</a> Teamspeak: <a href='https://github.com/AsYetUntitled/Framework/wiki' color='#56BDD6'> https://github.com/AsYetUntitled/Framework/wiki</a><br />";
_message = _message + "Benvenuto, <a color='#B000FF'>Octafox</a> Staff Team.<br />";


_text1 ctrlSetStructuredText (parseText _message);
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
