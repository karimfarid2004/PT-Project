#include "Input.h"
#include "Output.h"


Input::Input(window* pW) 
{
	pWind = pW; //point to the passed window
}

void Input::GetPointClicked(int &x, int &y) const
{
	pWind->WaitMouseClick(x, y);	//Wait for mouse click
}

string Input::GetSrting(Output *pO) const 
{
	string Label;
	char Key;
	string z = "You Entered ";
	while (1)
	{
		pWind->WaitKeyPress(Key);
		if (Key == 27)	//ESCAPE key is pressed
			return "";	//returns nothing as user has cancelled label
		if (Key == 13)
		{                       //ENTER key is pressed
			string str = z + Label;
			return str;
		}
		if((Key == 8) && (Label.size() >= 1))	//BackSpace is pressed
			Label.resize(Label.size() -1 );			
		else
			Label += Key;
		if (pO)
			pO->PrintMessage(Label);
	}
}

//This function reads the position where the user clicks to determine the desired action
ActionType Input::GetUserAction() const
{	
	int x,y;
	pWind->WaitMouseClick(x, y);	//Get the coordinates of the user click

	if(UI.InterfaceMode == MODE_DRAW)	//GUI in the DRAW mode
	{
		//[1] If user clicks on the Toolbar
		if ( y >= 0 && y < UI.ToolBarHeight)
		{	
			//Check whick Menu item was clicked
			//==> This assumes that menu items are lined up horizontally <==
			int ClickedItemOrder = (x / UI.MenuItemWidth);
			//Divide x coord of the point clicked by the menu item width (int division)
			//if division result is 0 ==> first item is clicked, if 1 ==> 2nd item and so on

			switch (ClickedItemOrder)
			{
			case ITM_RECT: return DRAW_RECT;
			case ITM_CIRC: return DRAW_CIRC;
			case ITM_SQU:  return DRAW_SQU;
			case ITM_HEX:  return DRAW_HEX;
			case ITM_TRI:  return DRAW_TRI;
			case ITM_PLAYMODE: return TO_PLAY;
			case ITM_EXITd: return EXIT;	
			case CHFILL_COLOR: return CHANGE_FILL_COLOR;
			case CHCOLOR: return CHANGE_COLOR;
			case IS_FILLED: return CHG_FILL;
			default: return EMPTY;	//A click on empty place in desgin toolbar
			}
		}

		//[2] User clicks on the drawing area
		if ( y >= UI.ToolBarHeight && y < UI.height - UI.StatusBarHeight)
		{
			return DRAWING_AREA;	
		}
		
		//[3] User clicks on the status bar
		return STATUS;
	}
	else if(UI.InterfaceMode == MODE_PLAY)	//GUI is in PLAY mode
	{
		if (y >= 0 && y < UI.ToolBarHeight) {
			int ClickedItemOrder = (x / UI.MenuItemWidth);
			switch (ClickedItemOrder)
			{
			case ITM_HIDEANDSEEK: return HIDEANDSEEK;
			case ITM_DRAWMODE: return TO_DRAW;
			case ITM_EXITp: return EXIT;

			default: return EMPTY;
			}
		}
		if (y >= UI.ToolBarHeight && y < UI.height - UI.StatusBarHeight)
		{
			return DRAWING_AREA;
		}

		//[3] User clicks on the status bar
		return STATUS;
	}
	else if(UI.InterfaceMode == COLOR)
	{
		if (y >= 0 && y < UI.ToolBarHeight) {
			int ClickedItemOrder = (x / UI.MenuItemWidth);
			switch (ClickedItemOrder)
			{
			case REDc:	   return COLORRED;
			case BLUEc:	   return COLORBLUE;
			case YELLOWc:   return COLORYELLOW;
			case WHITEc:    return COLORWHITE;
			case BLACKc:    return COLORBLACK;
			case GREENc:    return COLORGREEN;
			case ORANGEc:   return COLORORANGE;

			default: return EMPTY;
			}
		}
		if (y >= UI.ToolBarHeight && y < UI.height - UI.StatusBarHeight)
		{
			return DRAWING_AREA;
		}

		//[3] User clicks on the status bar
		return STATUS;
	}
	else if (UI.InterfaceMode == COLOR)
	{
		if (y >= 0 && y < UI.ToolBarHeight) {
			int ClickedItemOrder = (x / UI.MenuItemWidth);
			switch (ClickedItemOrder)
			{
			case REDc:	   return COLORRED;
			case BLUEc:	   return COLORBLUE;
			case YELLOWc:   return COLORYELLOW;
			case WHITEc:    return COLORWHITE;
			case BLACKc:    return COLORBLACK;
			case GREENc:    return COLORGREEN;
			case ORANGEc:   return COLORORANGE;

			default: return EMPTY;
			}
		}
		if (y >= UI.ToolBarHeight && y < UI.height - UI.StatusBarHeight)
		{
			return DRAWING_AREA;
		}

		//[3] User clicks on the status bar
		return STATUS;
	}
	else if (UI.InterfaceMode == FILLER)
	{
		if (y >= 0 && y < UI.ToolBarHeight) {
			int ClickedItemOrder = (x / UI.MenuItemWidth);
			switch (ClickedItemOrder)
			{
			case YFILLED: return FILL;
			case NFILLED: return NOFILL;

			default: return EMPTY;
			}
		}
		if (y >= UI.ToolBarHeight && y < UI.height - UI.StatusBarHeight)
		{
			return DRAWING_AREA;
		}

		//[3] User clicks on the status bar
		return STATUS;
	}
	else if (UI.InterfaceMode == FILLER_COLOR)
	{
		if (y >= 0 && y < UI.ToolBarHeight) {
			int ClickedItemOrder = (x / UI.MenuItemWidth);
			switch (ClickedItemOrder)
			{
			case REDc:	   return FCOLORRED;
			case BLUEc:	   return FCOLORBLUE;
			case YELLOWc:   return FCOLORYELLOW;
			case WHITEc:    return FCOLORWHITE;
			case BLACKc:    return FCOLORBLACK;
			case GREENc:    return FCOLORGREEN;
			case ORANGEc:   return FCOLORORANGE;

			default: return EMPTY;
			}
		}
		if (y >= UI.ToolBarHeight && y < UI.height - UI.StatusBarHeight)
		{
			return DRAWING_AREA;
		}

		//[3] User clicks on the status bar
		return STATUS;
		}
		
	}	

/////////////////////////////////
	
Input::~Input()
{
}
