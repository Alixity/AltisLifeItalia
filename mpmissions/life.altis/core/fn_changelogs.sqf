/*
    File: fn_changelogs.sqf
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
_message = _message + "<t align='center' size='6' shadow='0'>SimpleLife Changelogs</t><br /><br />";

_message = _message + "<t align='left'>";
_message = _message + "08.11.20 - Test1" + "<br />";
_message = _message + "08.11.20 - Test2" + "<br />";
_message = _message + "08.11.20 - Test3" + "<br />";
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
