waitUntil {!isServer && {!isNull player} && {player isEqualTo player}};
if (player diarySubjectExists "controls") exitWith {};

//player createDiarySubject ["civrules","Civilian Rules"];

/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>
                "
        ]
    ];
*/

player createDiarySubject ["informazioni","Informazioni","\A3\Data_F_Argo\Logos\arma3_argo_artwork.jpg"];
player createDiaryRecord ["informazioni", ["Discord","https://discord.gg/Bve7wg4P9U"]];
player createDiaryRecord ["informazioni", ["Regolamento","https://octafox.github.io/lifearma/regolamento"]];

