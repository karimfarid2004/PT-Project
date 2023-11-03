#include "Output.h"


Output::Output()
{
	//Initialize user interface parameters
	UI.InterfaceMode = MODE_DRAW;
	
	UI.width = 1250;
	UI.height = 650;
	UI.wx = 5;
	UI.wy =5;

	
	UI.StatusBarHeight = 50;
	UI.ToolBarHeight = 50;
	UI.MenuItemWidth = 80;
	
	UI.DrawColor = BLUE;	//Drawing color
	UI.FillColor = GREEN;	//Filling color
	UI.MsgColor = RED;		//Messages color
	UI.BkGrndColor = LIGHTGOLDENRODYELLOW;	//Background color
	UI.HighlightColor = MAGENTA;	//This color should NOT be used to draw figures. use if for highlight only
	UI.StatusBarColor = TURQUOISE;
	UI.PenWidth = 3;	//width of the figures frames

	
	//Create the output window
	pWind = CreateWind(UI.width, UI.height, UI.wx, UI.wy);
	//Change the title
	pWind->ChangeTitle("Paint for Kids - Programming Techniques Project");
	
	CreateDrawToolBar();
	CreateStatusBar();
}


Input* Output::CreateInput() const
{
	Input* pIn = new Input(pWind);
	return pIn;
}

//======================================================================================//
//								Interface Functions										//
//======================================================================================//

window* Output::CreateWind(int w, int h, int x, int y) const
{ 
	window* pW = new window(w, h, x, y);
	pW->SetBrush(UI.BkGrndColor);
	pW->SetPen(UI.BkGrndColor, 1);
	pW->DrawRectangle(0, UI.ToolBarHeight, w, h);	
	return pW;
}
//////////////////////////////////////////////////////////////////////////////////////////
void Output::CreateStatusBar() const
{
	pWind->SetPen(UI.StatusBarColor, 1);
	pWind->SetBrush(UI.StatusBarColor);
	pWind->DrawRectangle(0, UI.height - UI.StatusBarHeight, UI.width, UI.height);
}
//////////////////////////////////////////////////////////////////////////////////////////
void Output::ClearStatusBar() const
{
	//Clear Status bar by drawing a filled white rectangle
	pWind->SetPen(UI.StatusBarColor, 1);
	pWind->SetBrush(UI.StatusBarColor);
	pWind->DrawRectangle(0, UI.height - UI.StatusBarHeight, UI.width, UI.height);
}
//////////////////////////////////////////////////////////////////////////////////////////
void Output::CreateDrawToolBar() const
{

	UI.InterfaceMode = MODE_DRAW;

	string MenuItemImages[DRAW_ITM_COUNT];
	MenuItemImages[ITM_RECT] = "images\\MenuItems\\Menu_Rect.jpg";
	MenuItemImages[ITM_SQU] = "images\\MenuItems\\Menu_Squ.jpg";
	MenuItemImages[ITM_TRI] = "images\\MenuItems\\Menu_Tri.jpg";
	MenuItemImages[ITM_HEX] = "images\\MenuItems\\Menu_Hex.jpg";
	MenuItemImages[ITM_CIRC] = "images\\MenuItems\\Menu_Circ.jpg";
	MenuItemImages[ITM_PLAYMODE] = "images\\MenuItems\\Menu_Playmode.jpg";
	MenuItemImages[ITM_EXITd] = "images\\MenuItems\\Menu_Exit.jpg";

	for(int i = 0; i < DRAW_ITM_COUNT; i++)
		pWind->DrawImage(MenuItemImages[i], i*UI.MenuItemWidth, 0, UI.MenuItemWidth, UI.ToolBarHeight);
	pWind->SetPen(RED, 3);
	pWind->DrawLine(0, UI.ToolBarHeight, UI.width, UI.ToolBarHeight);
	CreateFillColorBarTAB();
	CreateColorBarTAB();
	CreateFilledBarTAB();
}
void Output::CreateFillColorBarTAB() const
{
	UI.InterfaceMode = MODE_DRAW;


	string MenuItemImages[fCOLOR_ITM_COUNT];
	MenuItemImages[REDfc] = "images\\MenuItems\\Color-red.jpg";
	MenuItemImages[BLUEfc] = "images\\MenuItems\\Color-blue.jpg";
	MenuItemImages[YELLOWfc] = "images\\MenuItems\\Color-yellow.jpg";
	MenuItemImages[GREENfc] = "images\\MenuItems\\Color-green.jpg";
	MenuItemImages[ORANGEfc] = "images\\MenuItems\\Color-orange.jpg";
	MenuItemImages[WHITEfc] = "images\\MenuItems\\Color-white.jpg";
	MenuItemImages[BLACKfc] = "images\\MenuItems\\Color-black.jpg";

	pWind->DrawImage(MenuItemImages[fcolornum], 8 * UI.MenuItemWidth, 0,  UI.MenuItemWidth, UI.ToolBarHeight);


}
void Output::CreateColorBarTAB() const
{
	UI.InterfaceMode = MODE_DRAW;


	string MenuItemImages[COLOR_ITM_COUNT];
	MenuItemImages[REDc] = "images\\MenuItems\\Color-red.jpg";
	MenuItemImages[BLUEc] = "images\\MenuItems\\Color-blue.jpg";
	MenuItemImages[YELLOWc] = "images\\MenuItems\\Color-yellow.jpg";
	MenuItemImages[GREENc] = "images\\MenuItems\\Color-green.jpg";
	MenuItemImages[ORANGEc] = "images\\MenuItems\\Color-orange.jpg";
	MenuItemImages[WHITEc] = "images\\MenuItems\\Color-white.jpg";
	MenuItemImages[BLACKc] = "images\\MenuItems\\Color-black.jpg";

		pWind->DrawImage(MenuItemImages[colornum], 7 * UI.MenuItemWidth, 0, UI.MenuItemWidth, UI.ToolBarHeight);


}
void Output::CreateFillColorBar() const
{
	UI.InterfaceMode = FILLER_COLOR;
	string MenuItemImages[fCOLOR_ITM_COUNT];
	MenuItemImages[REDfc] = "images\\MenuItems\\Color-red.jpg";
	MenuItemImages[BLUEfc] = "images\\MenuItems\\Color-blue.jpg";
	MenuItemImages[YELLOWfc] = "images\\MenuItems\\Color-yellow.jpg";
	MenuItemImages[GREENfc] = "images\\MenuItems\\Color-green.jpg";
	MenuItemImages[ORANGEfc] = "images\\MenuItems\\Color-orange.jpg";
	MenuItemImages[WHITEfc] = "images\\MenuItems\\Color-white.jpg";
	MenuItemImages[BLACKfc] = "images\\MenuItems\\Color-black.jpg";

	for (int i = 0; i < fCOLOR_ITM_COUNT; i++)
		pWind->DrawImage(MenuItemImages[i], i * UI.MenuItemWidth, 0, UI.MenuItemWidth, UI.ToolBarHeight);

	pWind->SetPen(RED, 3);
	pWind->DrawLine(0, UI.ToolBarHeight, UI.width, UI.ToolBarHeight);
}
void Output::CreateColorBar() const
{
	UI.InterfaceMode = COLOR;
	string MenuItemImages[COLOR_ITM_COUNT];
	MenuItemImages[REDc] = "images\\MenuItems\\Color-red.jpg";
	MenuItemImages[BLUEc] = "images\\MenuItems\\Color-blue.jpg";
	MenuItemImages[YELLOWc] = "images\\MenuItems\\Color-yellow.jpg";
	MenuItemImages[GREENc] = "images\\MenuItems\\Color-green.jpg";
	MenuItemImages[ORANGEc] = "images\\MenuItems\\Color-orange.jpg";
	MenuItemImages[WHITEc] = "images\\MenuItems\\Color-white.jpg";
	MenuItemImages[BLACKc] = "images\\MenuItems\\Color-black.jpg";

	for (int i = 0; i < COLOR_ITM_COUNT; i++)
		pWind->DrawImage(MenuItemImages[i], i * UI.MenuItemWidth, 0, UI.MenuItemWidth, UI.ToolBarHeight);

	pWind->SetPen(RED, 3);
	pWind->DrawLine(0, UI.ToolBarHeight, UI.width, UI.ToolBarHeight);
}
void Output::CreateFilledBarTAB() const
{
	UI.InterfaceMode = MODE_DRAW;

	string MenuItemImages[ITM_FILL];
		MenuItemImages[YFILLED] = "images\\MenuItems\\FILLED.jpg";
		MenuItemImages[NFILLED] = "images\\MenuItems\\NOTFILLED.jpg";

	pWind->DrawImage(MenuItemImages[fillnum], 9 * UI.MenuItemWidth, 0, UI.MenuItemWidth, UI.ToolBarHeight);


}
void Output::CreateFilledBar() const
{

	UI.InterfaceMode = FILLER;
	string MenuItemImages[ITM_FILL];
	MenuItemImages[YFILLED] = "images\\MenuItems\\FILLED.jpg";
	MenuItemImages[NFILLED] = "images\\MenuItems\\NOTFILLED.jpg";

	for (int i = 0; i < ITM_FILL; i++)
		pWind->DrawImage(MenuItemImages[i], i * UI.MenuItemWidth, 0, UI.MenuItemWidth, UI.ToolBarHeight);
	pWind->SetPen(RED, 3);
	pWind->DrawLine(0, UI.ToolBarHeight, UI.width, UI.ToolBarHeight);

}

//////////////////////////////////////////////////////////////////////////////////////////
void Output::CreatePlayToolBar() const
{

	UI.InterfaceMode = MODE_PLAY;


	string MenuItemImages[PLAY_ITM_COUNT];
	MenuItemImages[ITM_HIDEANDSEEK] = "images\\MenuItems\\Menu_HAS.jpg";
	MenuItemImages[ITM_DRAWMODE] = "images\\MenuItems\\Menu_Drawmode.jpg";
	MenuItemImages[ITM_EXITp] = "images\\MenuItems\\Menu_Exit.jpg";


	for (int i = 0; i < PLAY_ITM_COUNT; i++)
		pWind->DrawImage(MenuItemImages[i], i * UI.MenuItemWidth, 0, UI.MenuItemWidth, UI.ToolBarHeight);



	//Draw a line under the toolbar
	pWind->SetPen(RED, 3);
	pWind->DrawLine(0, UI.ToolBarHeight, UI.width, UI.ToolBarHeight);
}
//////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
void Output::ClearToolBar() const
{
	pWind->SetPen(WHITE, 1);
	pWind->SetBrush(WHITE);
	pWind->DrawRectangle(0, 0, UI.width, UI.ToolBarHeight);
}

void Output::ClearDrawArea() const
{
	pWind->SetPen(UI.BkGrndColor, 1);
	pWind->SetBrush(UI.BkGrndColor);
	pWind->DrawRectangle(0, UI.ToolBarHeight, UI.width, UI.height - UI.StatusBarHeight);
	
}
//////////////////////////////////////////////////////////////////////////////////////////

void Output::PrintMessage(string msg) const	//Prints a message on status bar
{
	ClearStatusBar();	//First clear the status bar
	
	pWind->SetPen(UI.MsgColor, 50);
	pWind->SetFont(20, BOLD , BY_NAME, "Arial");   
	pWind->DrawString(10, UI.height - (int)(UI.StatusBarHeight / 1.5), msg);
}
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////

color Output::getCrntDrawColor() const	//get current drawing color
{	return UI.DrawColor;	}
//////////////////////////////////////////////////////////////////////////////////////////

color Output::getCrntFillColor() const	//get current filling color
{	return UI.FillColor;	}
//////////////////////////////////////////////////////////////////////////////////////////
	
int Output::getCrntPenWidth() const		//get current pen width
{	return UI.PenWidth;	}

//======================================================================================//
//								Figures Drawing Functions								//
//======================================================================================//

void Output::DrawRect(Point P1, Point P2, GfxInfo RectGfxInfo, bool selected) const
{
	color DrawingClr;
	if(selected)	
		DrawingClr = UI.HighlightColor; //Figure should be drawn highlighted
	else			
		DrawingClr = RectGfxInfo.DrawClr;
	
	pWind->SetPen(DrawingClr,1);
	drawstyle style;
	if (RectGfxInfo.isFilled)	
	{
		style = FILLED;		
		pWind->SetBrush(RectGfxInfo.FillClr);
	}
	else	
		style = FRAME;

	
	pWind->DrawRectangle(P1.x, P1.y, P2.x, P2.y, style);
	
}
void Output::DrawSqu(Point P1, GfxInfo SquGfxInfo, bool selected) const
{
	color DrawingClr;
	if (selected)
		DrawingClr = UI.HighlightColor; //Figure should be drawn highlighted
	else
		DrawingClr = SquGfxInfo.DrawClr;

	pWind->SetPen(DrawingClr, 1);
	drawstyle style;
	if (SquGfxInfo.isFilled)
	{
		style = FILLED;
		pWind->SetBrush(SquGfxInfo.FillClr);
	}
	else
		style = FRAME;
	P1.X[0] = P1.x + 100; 
	P1.X[1] = P1.x + 100;
	P1.X[2] = P1.x - 100;
	P1.X[3] = P1.x - 100;
	P1.Y[0] = P1.y + 100;
	P1.Y[1] = P1.y - 100;
	P1.Y[2] = P1.y - 100;
	P1.Y[3] = P1.y + 100;

	pWind->DrawPolygon(P1.X, P1.Y, 4, style);
}
void Output::DrawTri(Point P1, GfxInfo TriGfxInfo, bool selected) const
{
	color DrawingClr;
	if (selected)
		DrawingClr = UI.HighlightColor; //Figure should be drawn highlighted
	else
		DrawingClr = TriGfxInfo.DrawClr;

	pWind->SetPen(DrawingClr, 1);
	drawstyle style;
	if (TriGfxInfo.isFilled)
	{
		style = FILLED;
		pWind->SetBrush(TriGfxInfo.FillClr);
	}
	else
		style = FRAME;


	pWind->DrawPolygon(P1.X, P1.Y, 3, style);
}
void Output::DrawHex(Point P1, GfxInfo HexGfxInfo, bool selected) const
{
	color DrawingClr;
	if (selected)
		DrawingClr = UI.HighlightColor; //Figure should be drawn highlighted
	else
		DrawingClr = HexGfxInfo.DrawClr;

	pWind->SetPen(DrawingClr, 1);
	drawstyle style;
	if (HexGfxInfo.isFilled)
	{
		style = FILLED;
		pWind->SetBrush(HexGfxInfo.FillClr);
	}
	else
		style = FRAME;
	P1.X[0] = P1.x + 100; 	P1.Y[0] = P1.y;
	P1.X[1] = P1.x + 50;	P1.Y[1] = P1.y + 100 * sqrt(3) / 2;
	P1.X[2] = P1.x - 50;	P1.Y[2] = P1.y + 100 * sqrt(3) / 2;
	P1.X[3] = P1.x - 100;	P1.Y[3] = P1.y;
	P1.X[4] = P1.x - 50;	P1.Y[4] = P1.y - 100 * sqrt(3) / 2;
	P1.X[5] = P1.x + 50;	P1.Y[5] = P1.y - 100 * sqrt(3) / 2;



	pWind->DrawPolygon(P1.X, P1.Y, 6, style);
}
void Output::DrawCirc(Point P1, Point P2, GfxInfo CircGfxInfo, bool selected) const
{
	color DrawingClr;
	if (selected)
		DrawingClr = UI.HighlightColor; //Figure should be drawn highlighted
	else
		DrawingClr = CircGfxInfo.DrawClr;

	pWind->SetPen(DrawingClr, 1);
	drawstyle style;
	if (CircGfxInfo.isFilled)
	{
		style = FILLED;
		pWind->SetBrush(CircGfxInfo.FillClr);
	}
	else
		style = FRAME;


	pWind->DrawCircle(P1.x, P1.y, sqrt((P2.x-P1.x)*(P2.x - P1.x) + (P2.y - P1.y)*(P2.y - P1.y)), style);

}
//////////////////////////////////////////////////////////////////////////////////////////
Output::~Output()
{
	delete pWind;
}

