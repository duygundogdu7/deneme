#include "Blocks.h"

Blocks::Blocks()
{
	numofrectangles = 8;
	numofsquares = 10;
	squares = new Squares[numofsquares];
	rectangles = new Rectangles[numofrectangles];


	for(int j=240, i=190, cnt = 0;cnt < 10;i=i+155, cnt++)
	{
		squares[cnt].posX = i;
		squares[cnt].posY = j;
		if(cnt == 4)
		{
			j = j + 130;
			i = 35;
		}
	}
	
	for(int j=215, i=210, cnt=0;cnt < 8;i=i+155, cnt++)
	{
		rectangles[cnt].x1 = i;
		rectangles[cnt].x2 = i + 110;
		rectangles[cnt].y1 = j;
		rectangles[cnt].y2 = j + 50;
		if(cnt == 3)
		{
			j = j + 130;
			i = 55;
		}
	}	

}

void Blocks::drawBlocks()
{
	useBrush(1, RGB(240, 128, 128));
	for(int cnt = 0; cnt < numofsquares; cnt++)
	{
		drawSquare(squares[cnt].posX, squares[cnt].posY, 50);
	}

	useBrush(1, RGB(127, 255, 212));
	for(int cnt = 0; cnt < numofrectangles; cnt++)
	{
		drawRectangle(rectangles[cnt].x1, rectangles[cnt].y1, rectangles[cnt].x2, rectangles[cnt].y2);
	}
}
