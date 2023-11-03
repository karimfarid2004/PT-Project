#include "GUI\Input.h"
#include "GUI\Output.h"


int main()
{
	int x,y;

	Output *pOut = new Output();
	Input* pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x,y);	


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	
	//			Create The FULL Tool bar, the drawing area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x,y);
	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	
	//			Drawing all the Figures with all possible states: 
	//			Non-filled, Filled, and highlighted in both cases			
	///////////////////////////////////////////////////////////////////////////////////
	
	pOut->PrintMessage("TEST2: Now we will show that Output class can draw any figure in any state, Click anywhere to continue");
	pIn->GetPointClicked(x,y);
	GfxInfo gfxInfo;
	Point P1, P2;
	/// 2.1- Rectangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Rectangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Rectangle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut->DrawRect(P1, P2, gfxInfo, false);


	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted non-filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Rectangle ==>Highlighted non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut->DrawRect(P1, P2, gfxInfo, true);


	pOut->PrintMessage("Drawing a Rectangle ==> filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Rectangle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;
	gfxInfo.isFilled = true;
	gfxInfo.FillClr = GREEN;
	pOut->DrawRect(P1, P2, gfxInfo, false);



	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;
	gfxInfo.isFilled = true;
	gfxInfo.FillClr = GREEN;
	pOut->DrawRect(P1, P2, gfxInfo, true);



	pOut->PrintMessage("Drawing a Rectangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);
	pOut->ClearDrawArea();

	///// ========================================2.2- Square Test=================================================== ///
	pOut->PrintMessage("Drawing a Square, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Square ==> non-filled,  Click one points");
	pIn->GetPointClicked(P1.x, P1.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut->DrawSqu(P1, gfxInfo, false);


	pOut->PrintMessage("Drawing a Square ==> Highlighted non-filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Square ==>Highlighted non-filled,  Click one points");
	pIn->GetPointClicked(P1.x, P1.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut->DrawSqu(P1, gfxInfo, true);


	pOut->PrintMessage("Drawing a Square ==> filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Square ==> filled,  Click one points");
	pIn->GetPointClicked(P1.x, P1.y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;
	gfxInfo.isFilled = true;
	gfxInfo.FillClr = GREEN;
	pOut->DrawSqu(P1, gfxInfo, false);



	pOut->PrintMessage("Drawing a Square ==> Highlighted filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Square ==> Highlighted filled,  Click one points");
	pIn->GetPointClicked(P1.x, P1.y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;
	gfxInfo.isFilled = true;
	gfxInfo.FillClr = GREEN;
	pOut->DrawSqu(P1, gfxInfo, true);



	pOut->PrintMessage("Drawing a Square Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);
	pOut->ClearDrawArea();

	//
	//
	///// =============================================2.3- Triangle Test ============================================///
	pOut->PrintMessage("Drawing a Triangle ==> non-filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Triangle ==> non-filled,  Click three point");
	pIn->GetPointClicked(P1.X[0], P1.Y[0]);
	pIn->GetPointClicked(P1.X[1], P1.Y[1]);
	pIn->GetPointClicked(P1.X[2], P1.Y[2]);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut->DrawTri(P1, gfxInfo, false);

	pOut->PrintMessage("Drawing a Triangle ==> Highlighted not filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted not filled,  Click three point");
	pIn->GetPointClicked(P1.X[0], P1.Y[0]);
	pIn->GetPointClicked(P1.X[1], P1.Y[1]);
	pIn->GetPointClicked(P1.X[2], P1.Y[2]);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut->DrawTri(P1, gfxInfo, true);

	pOut->PrintMessage("Drawing a Triangle ==> filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Triangle ==> filled,  Click three point");
	pIn->GetPointClicked(P1.X[0], P1.Y[0]);
	pIn->GetPointClicked(P1.X[1], P1.Y[1]);
	pIn->GetPointClicked(P1.X[2], P1.Y[2]);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = true;
	pOut->DrawTri(P1, gfxInfo, false);

	pOut->PrintMessage("Drawing a Triangle ==> Highlighted filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted filled,  Click three point");
	pIn->GetPointClicked(P1.X[0], P1.Y[0]);
	pIn->GetPointClicked(P1.X[1], P1.Y[1]);
	pIn->GetPointClicked(P1.X[2], P1.Y[2]);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = true;
	pOut->DrawTri(P1, gfxInfo, true);

	pOut->PrintMessage("Drawing a Triangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);
	pOut->ClearDrawArea();
	//
	///// ==============================================================2.4- Hexagon Test ===================================================///
	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Hexagon ==> non-filled,  Click one point");
	pIn->GetPointClicked(P1.x, P1.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut->DrawHex(P1, gfxInfo, false);

	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted non-filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted non-filled,  Click three point");
	pIn->GetPointClicked(P1.x, P1.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut->DrawHex(P1, gfxInfo, true);

	pOut->PrintMessage("Drawing a Hexagon ==> filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Hexagon ==> filled,  Click one point");
	pIn->GetPointClicked(P1.x, P1.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = true;
	pOut->DrawHex(P1, gfxInfo, false);

	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted filled,  Click one point");
	pIn->GetPointClicked(P1.x, P1.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = true;
	pOut->DrawHex(P1, gfxInfo, true);

	pOut->PrintMessage("Drawing a Hexagon Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);
	pOut->ClearDrawArea();
	//
	/////===================================================== 2.5- Circle Test ======================================================///
	//
	pOut->PrintMessage("Drawing a Cirlce, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Cirlce ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut->DrawCirc(P1, P2, gfxInfo, false);


	pOut->PrintMessage("Drawing a Cirlce ==> Highlighted non-filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Cirlce ==>Highlighted non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut->DrawCirc(P1, P2, gfxInfo, true);


	pOut->PrintMessage("Drawing a Cirlce ==> filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Cirlce ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;
	gfxInfo.isFilled = true;
	gfxInfo.FillClr = GREEN;
	pOut->DrawCirc(P1, P2, gfxInfo, false);



	pOut->PrintMessage("Drawing a Cirlce ==> Highlighted filled");
	pIn->GetPointClicked(x, y);
	pOut->PrintMessage("Drawing a Cirlce ==> Highlighted filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;
	gfxInfo.isFilled = true;
	gfxInfo.FillClr = GREEN;
	pOut->DrawCirc(P1, P2, gfxInfo, true);



	pOut->PrintMessage("Drawing a Rectangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);
	pOut->ClearDrawArea();
	pOut->ClearToolBar();
	pOut->CreateDrawToolBar();
	/////////////////////////////////////////////////////////////////////////////////////
	//// TEST 3: 
	////			Input Class: Read strings from the user
	/////////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x,y);
	
	pOut->PrintMessage("Testing Input ability to read strings");


	pOut->PrintMessage(pIn->GetSrting(pOut));


	pIn->GetPointClicked(x,y);
	pOut->ClearDrawArea();
	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: 
	//			Input Class : Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST4: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;

	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case DRAW_RECT:

			pOut->PrintMessage("Drawing a Rectangle ==> non-filled,  Click two points");
			break;

		case DRAW_SQU:

			pOut->PrintMessage("Action: Draw a Square , Click anywhere");
			break;

		case DRAW_TRI:

			pOut->PrintMessage("Action: Draw a Triangle , Click anywhere");
			break;

		case DRAW_HEX:

			pOut->PrintMessage("Action: Draw a Hexagon , Click anywhere");
			break;

		case DRAW_CIRC:

			pOut->PrintMessage("Action: Draw a Circle , Click anywhere");
			break;

		case STATUS:
			pOut->PrintMessage("Action: a click on the Status Bar, Click anywhere");
			break;

		case DRAWING_AREA:
			pOut->PrintMessage("Action: a click on the Drawing Area, Click anywhere");
			break;

		case EMPTY:
			pOut->PrintMessage("Action: a click on empty area in the Design Tool Bar, Click anywhere");
			break;

		case HIDEANDSEEK:
			pOut->PrintMessage("Action: Play Hide and seek, Click anywhere");
			break;

		case TO_DRAW:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Switch to Draw Mode, creating simualtion tool bar");
			pOut->CreateDrawToolBar();
			break;

		case TO_PLAY:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Switch to Play Mode, creating Design tool bar");
			pOut->CreatePlayToolBar();
			break;
		case COLORRED:
			pOut->ClearToolBar();
			pOut->PrintMessage("Color RED is selected");
			pOut->colornum = 0;
			pOut->CreateDrawToolBar();
			break;
		case COLORBLUE:
			pOut->ClearToolBar();
			pOut->PrintMessage("Color BLUE is selected");
			pOut->colornum = 1;
			pOut->CreateDrawToolBar();
			break;
		case COLORYELLOW:
			pOut->ClearToolBar();
			pOut->PrintMessage("Color YELLOW is selected");
			pOut->colornum = 2;
			pOut->CreateDrawToolBar();
			break;
		case COLORBLACK:
			pOut->ClearToolBar();
			pOut->PrintMessage("Color BLACK is selected");
			pOut->colornum = 3;
			pOut->CreateDrawToolBar();
			break;
		case COLORWHITE:
			pOut->ClearToolBar();
			pOut->PrintMessage("Color WHITE is selected");
			pOut->colornum = 4;
			pOut->CreateDrawToolBar();
			break;
		case COLORORANGE:
			pOut->ClearToolBar();
			pOut->PrintMessage("Color ORANGE is selected");
			pOut->colornum = 5;
			pOut->CreateDrawToolBar();
			break;
		case COLORGREEN:
			pOut->ClearToolBar();
			pOut->PrintMessage("Color GREEN is selected");
			pOut->colornum = 6;
			pOut->CreateDrawToolBar();
			break;
		case CHG_FILL:
			pOut->ClearToolBar();
			pOut->CreateFilledBar();
			break;
		case FILL:
			pOut->PrintMessage("You choosed FILLED");
			pOut->ClearToolBar();
			pOut->fillnum = 0;
			pOut->CreateDrawToolBar();
			break;
		case NOFILL:
			pOut->PrintMessage("You choosed NOT FILLED");
			pOut->ClearToolBar();
			pOut->fillnum = 1;
			pOut->CreateDrawToolBar();
			break;
		case FCOLORRED:
			pOut->ClearToolBar();
			pOut->PrintMessage("FILL Color RED is selected");
			pOut->fcolornum = 0;
			pOut->CreateDrawToolBar();
			break;
		case FCOLORBLUE:
			pOut->ClearToolBar();
			pOut->PrintMessage("FILL Color BLUE is selected");
			pOut->fcolornum = 1;
			pOut->CreateDrawToolBar();
			break;
		case FCOLORYELLOW:
			pOut->ClearToolBar();
			pOut->PrintMessage("FILL Color YELLOW is selected");
			pOut->fcolornum = 2;
			pOut->CreateDrawToolBar();
			break;
		case FCOLORBLACK:
			pOut->ClearToolBar();
			pOut->PrintMessage("FILL Color BLACK is selected");
			pOut->fcolornum = 3;
			pOut->CreateDrawToolBar();
			break;
		case FCOLORWHITE:
			pOut->ClearToolBar();
			pOut->PrintMessage("FILL Color WHITE is selected");
			pOut->fcolornum = 4;
			pOut->CreateDrawToolBar();
			break;
		case FCOLORORANGE:
			pOut->ClearToolBar();
			pOut->PrintMessage("FILL Color ORANGE is selected");
			pOut->fcolornum = 5;
			pOut->CreateDrawToolBar();
			break;
		case FCOLORGREEN:
			pOut->ClearToolBar();
			pOut->PrintMessage("FILL Color GREEN is selected");
			pOut->fcolornum = 6;
			pOut->CreateDrawToolBar();
			break;
		case CHANGE_FILL_COLOR:
			pOut->ClearToolBar();
			pOut->CreateFillColorBar();
			break;
		case CHANGE_COLOR:
			pOut->ClearToolBar();
			pOut->CreateColorBar();
			break;
		case EXIT:				
				break;
		}
	}while(ActType != EXIT);


	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x,y);


	delete pIn;
	delete pOut;	
	return 0;
}


