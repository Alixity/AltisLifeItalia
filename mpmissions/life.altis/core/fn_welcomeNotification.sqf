/*
    File: fn_welcomeNotification.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='6' shadow='0'>Altis Life Italia</t><br /><br />";
_message = _message + "<t align='center'>Life italia mira a garantire un'esperienza genuina e divertente sull'ormai datato Arma. il server vanta di 3 principali <br />";
_message = _message + "fazioni: la polizia, i CTRG e i Ribelli. La polizia garantisce il controllo sulla popolazione civile nei limiti <br />";
_message = _message + "della legge, mentre i CTRG mirano a debellare le particelle piu' pericolose di criminalità sull'isola. <br />";
_message = _message + "I ribelli aspirano a prendere il controllo dell'isola, in modo da istituire un governo di stampo anarchico <br />";
_message = _message + "e una nazione egualitaria. Starà al civile scegliere da che parte stare.</t><br />";
_message = _message + "<br /><t>Restarts: 01:00 - 06:00 - 13:00 - 19:00</t><br />";
_message = _message + "<br /><a color='#00DFFF'>•</a> Teamspeak: <a href='https://discord.gg/Bve7wg4P9U' color='#56BDD6'>https://discord.gg/Bve7wg4P9U</a><br /><br /><br />";
_message = _message + "Benvenuto, <a color='#B000FF'>Octafox</a> Staff Team.<br />";

//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
