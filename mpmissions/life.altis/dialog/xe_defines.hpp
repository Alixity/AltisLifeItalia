#define ST_LEFT           0x00
#define ST_MULTI          0x10
#define GUI_GRID_CENTER_WAbs        ((safezoneW / safezoneH) min 1.2)
#define GUI_GRID_CENTER_HAbs        (GUI_GRID_CENTER_WAbs / 1.2)
#define GUI_GRID_CENTER_W        (GUI_GRID_CENTER_WAbs / 40)
#define GUI_GRID_CENTER_H        (GUI_GRID_CENTER_HAbs / 25)
#define GUI_GRID_CENTER_X        (safezoneX + (safezoneW - GUI_GRID_CENTER_WAbs)/2)
#define GUI_GRID_CENTER_Y        (safezoneY + (safezoneH - GUI_GRID_CENTER_HAbs)/2)

#define ST_CENTER 			0x02
#define ST_VCENTER			0x0C
#define ST_UPPERCASE		0xC0
#define ST_FULLCENTER		ST_CENTER + ST_VCENTER + ST_UPPERCASE


class xeRscIconButton {
    deletable = 0;
    fade = 0;
    access = 0;
    idc = -1;
    font = "TahomaB";
    sizeEx = 0;
    lineSpacing = 0;
    text = "";
    fixedWidth = 0;
    shadow = 0;
    x = 0;
    y = 0;
    w = 0.2;
    h = 0.15;

    tooltip = "";
    tooltipColorBox[] = {1,1,1,0};
    tooltipColorText[] = { 1, 1, 1, 1 };
    tooltipColorShade[] = { 0, 0, 0, 0.65 };

    color[] = {1,1,1,1};
    colorActive[] = {1,1,1,1};
    colorDisabled[] = {1,1,1,1};
    colorBackground[] = { 0, 0, 0, 0 };
    colorText[] = { 1, 1, 1, 1 };

    type = 11;
    style = 48;

    soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
    soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};

    action = "";
};

class xeRscButton: Life_RscButtonMenu {
	style = ST_FULLCENTER;
};