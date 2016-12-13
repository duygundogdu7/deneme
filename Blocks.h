#pragma once

#include "SimpleDraw.h"

typedef struct Squares
{
	float posX;
	float posY;
}Squares;

typedef struct Rectangles
{
	float x1;
	float y1;
	float x2;
	float y2;
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
};