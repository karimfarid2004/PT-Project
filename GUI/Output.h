#ifndef OUPTUT_H
#define OUPTUT_H
#include "Input.h"

class Output	//The application manager should have a pointer to this class
{
private:	
	window* pWind;	//Pointer to the Graphics Window
public:
	int colornum=0;
	int fcolornum = 0;
	int fillnum = 0;
	Output();		

	window* CreateWind(int, int, int , int) const; //creates the application window
	void CreateDrawToolBar() const;

	void CreatePlayToolBar() const;

	void CreateStatusBar() const;

	void CreateColorBar() const;
	void CreateColorBarTAB() const;

	void CreateFillColorBarTAB() const;
	void CreateFillColorBar() const;

	void CreateFilledBarTAB() const;
	void CreateFilledBar() const;

	Input* CreateInput() const; //creates a pointer to the Input object	
	void ClearStatusBar() const;	//Clears the status bar
	void ClearDrawArea() const;	//Clears the drawing area
	void ClearToolBar() const;
	
	// -- Figures Drawing functions
	void DrawRect(Point P1, Point P2, GfxInfo RectGfxInfo, bool selected=false) const; 
	void DrawSqu(Point P1, GfxInfo SquGfxInfo, bool selected = false) const;
	void DrawHex(Point P1, GfxInfo HexGfxInfo, bool selected = false) const;
	void DrawTri(Point P1, GfxInfo TriGfxInfo, bool selected = false) const;
	void DrawCirc(Point P1, Point P2, GfxInfo RectGfxInfo, bool selected = false) const;
	///Make similar functions for drawing all other figure types.
	
	void PrintMessage(string msg) const;	//Print a message on Status bar
	color getCrntDrawColor() const;	//get current drwawing color
	color getCrntFillColor() const;	//get current filling color
	int getCrntPenWidth() const;		//get current pen width

	
	~Output();
};

#endif