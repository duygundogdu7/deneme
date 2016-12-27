#include "Blocks.h"

Blocks::Blocks()
{
	numofrectangles = 8;
	numofsquares = 10;
	squares = new Squares[numofsquares];
	rectangles = new Rectangles[numofrectangles];


	for (int j = 240, i = 190, cnt = 0;cnt < 10;i = i + 155, cnt++)
	{
		squares[cnt].posX = i;
		squares[cnt].posY = j;
		squares[cnt].c = 3;

		if (cnt == 4)
		{
			j = j + 130;
			i = 35;
		}
	}

	for (int j = 215, i = 210, cnt = 0;cnt < 8;i = i + 155, cnt++)
	{
		rectangles[cnt].x1 = i;
		rectangles[cnt].x2 = i + 110;
		rectangles[cnt].y1 = j;
		rectangles[cnt].y2 = j + 50;
		rectangles[cnt].c = 2;
		if (cnt == 3)
		{
			j = j + 130;
			i = 55;
		}
	}

}

void Blocks::drawBlocks()
{
	useBrush(1, RGB(240, 128, 128));
	for (int cnt = 0; cnt < numofsquares; cnt++)
	{
		drawSquare(squares[cnt].posX, squares[cnt].posY, 50);
	}

	useBrush(1, RGB(127, 255, 212));
	for (int cnt = 0; cnt < numofrectangles; cnt++)
	{
		drawRectangle(rectangles[cnt].x1, rectangles[cnt].y1, rectangles[cnt].x2, rectangles[cnt].y2);
	}
}
bool Blocks::checkCol(Bullet& a, int& score, int& cnt)
{
	BulletPos* bullets = a.getPos();
	for (int i = 0;i < a.getNum();i++)
	{
		for (int j = 0;j<numofsquares;j++)
		{
			if (squares[j].posX + 25 >= bullets[i].posX && squares[j].posX - 25 <= bullets[i].posX && squares[j].posY + 25 == bullets[i].posY)
			{
				squares[j].c--;
				a.deleteBullet(i);
				if (squares[j].c == 0)
				{
					deleteSquare(j);
					cnt--;
					score += 30;
				}
			}
		}
	}
	for (int i = 0;i < a.getNum();i++)
	{
		for (int j = 0;j<numofrectangles;j++)
		{
			if (rectangles[j].x2 >= bullets[i].posX && rectangles[j].x1 <= bullets[i].posX && rectangles[j].y2 == bullets[i].posY)
			{
				rectangles[j].c--;
				a.deleteBullet(i);
				if (rectangles[j].c == 0)
				{
					deleteRectangle(j);
					cnt--;
					score += 20;
				}
			}
		}
	}
	return true;
}
void Blocks::deleteSquare(int j)
{
	int c = 0;
	Squares* temp = new Squares[numofsquares - 1];
	for (int i = 0;i<numofsquares;i++)
	{
		if (i != j)
		{
			temp[c] = squares[i];
			c++;
		}
	}
	delete[] squares;
	squares = temp;
	numofsquares--;
}
void Blocks::deleteRectangle(int j)
{
	int c = 0;
	Rectangles* temp = new Rectangles[numofrectangles - 1];
	for (int i = 0;i<numofrectangles;i++)
	{
		if (i != j)
		{
			temp[c] = rectangles[i];
			c++;
		}
	}
	delete[] rectangles;
	rectangles = temp;
	numofrectangles--;
}