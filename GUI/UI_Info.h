#ifndef UI_INFO_H
#define UI_INFO_H
#include "UI_Info.h"
#include "..\CMUgraphicsLib\CMUgraphics.h"

enum GUI_MODE
{
	MODE_DRAW,
	MODE_PLAY,
	COLOR,
	FILLER,
	FILLER_COLOR
};
enum CHANGE_FILLER
{
	YFILLED,
	NFILLED,

	ITM_FILL
};
enum DrawMenuItem 
{

	ITM_RECT,	
	ITM_SQU,
	ITM_TRI,
	ITM_HEX,
	ITM_CIRC,
	ITM_PLAYMODE,
	ITM_EXITd,
	DRAW_ITM_COUNT,
	CHCOLOR=7,
	CHFILL_COLOR,
	IS_FILLED
	
	
};
enum COLORS
{
	REDc,//
	BLUEc,
	YELLOWc,
	BLACKc,
	WHITEc,
	ORANGEc,
	GREENc,//

	COLOR_ITM_COUNT
};
enum fCOLORS
{
	REDfc,//
	BLUEfc,
	YELLOWfc,
	BLACKfc,
	WHITEfc,
	ORANGEfc,
	GREENfc,//

	fCOLOR_ITM_COUNT
};
enum PlayMenuItem
{
	ITM_HIDEANDSEEK,
	ITM_DRAWMODE,
	ITM_EXITp,

	PLAY_ITM_COUNT	
	
};





__declspec(selectany) //This line to prevent "redefinition error"
struct UI_Info	//User Interface Info.
{
	GUI_MODE InterfaceMode;
	
	int	width, height,	    //Window width and height
		wx , wy,			//Window starting coordinates
		StatusBarHeight,	//Status Bar Height
		ToolBarHeight,		//Tool Bar Height (distance from top of window to bottom line of toolbar)
		MenuItemWidth;		//Width of each item in toolbar menu
	

	color DrawColor;		//Drawing color
	color FillColor;		//Filling color
	color HighlightColor;	//Highlighting color
	color MsgColor;			//Messages color
	color BkGrndColor;		//Background color
	color StatusBarColor;	//Status bar color
	int PenWidth;			//width of the pen that draws shapes

	/// Add more members if needed
	
}UI;	//create a global object UI


#endif