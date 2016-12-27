#pragma once
#include "SimpleDraw.h"
#include "Bullet.h"

class LifeUp
{
private:
	int posX;
	int posY;
	bool alive;
	int c = 3;
public:
	LifeUp(int, int);
	void drawLifeUp();
	void checkCol(Bullet& a, int& score, int& cnt);
	bool isAlive();
};