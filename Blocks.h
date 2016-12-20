#pragma once
#include "Bullet.h"
#include "SimpleDraw.h"

typedef struct Squares
{
	float posX;
	float posY;
	int c;
}Squares;

typedef struct Rectangles
{
	float x1;
	float y1;
	float x2;
	float y2;
	int c;
}Rectangles;

class Blocks
{
private:
	Squares *squares;
	Rectangles *rectangles;
	
	int numofsquares;
	int numofrectangles;
public:
	Blocks();

	void drawBlocks();
	bool checkCol(Bullet& a);
	void deleteSquare (int j);
	void deleteRectangle (int j);
};