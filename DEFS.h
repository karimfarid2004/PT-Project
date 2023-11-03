#ifndef DEFS_H
#define DEFS_H

#include "CMUgraphicsLib\CMUgraphics.h"

//This file contains some global constants and definitions to be used in the project.
enum ActionType //The actions supported (you can add more if needed)
{
	DRAW_RECT,
	DRAW_SQU,
	DRAW_TRI,
	DRAW_HEX,
	DRAW_CIRC,
	COLORRED,//
	COLORBLUE,
	COLORYELLOW,
	COLORBLACK,
	COLORWHITE,
	COLORGREEN,
	COLORORANGE,//
	FCOLORRED,//
	FCOLORBLUE,
	FCOLORYELLOW,
	FCOLORBLACK,
	FCOLORWHITE,
	FCOLORGREEN,
	FCOLORORANGE,//
	EXIT,
	TO_DRAW,
	FILL,
	NOFILL,
	TO_PLAY,	
	EMPTY,
	HIDEANDSEEK,
	DRAWING_AREA,	
	STATUS,
	CHANGE_FILL_COLOR,
	CHANGE_COLOR,
	CHG_FILL

	
};

struct Point
{
	int x, y;
	int X[6];
	int Y[6];
};

struct GfxInfo	//Graphical info of each figure (you may add more members)
{
	color DrawClr;	//Draw color of the figure
	color FillClr;	//Fill color of the figure
	bool isFilled;	//Figure Filled or not
	int BorderWdth;	//Width of figure borders

};

#endif