#pragma once
#include"Bullet.h"
enum Directions
{
	DIRECTION_DEFAULT,
	DIRECTION_UP,
	DIRECTION_DOWN,
	DIRECTION_LEFT,
	DIRECTION_RIGHT,
};

class Player
{
	float x, y;
	int c;
public:
	Player(void);
	int getHealth();
	void move(int direction);
	void drawPlayer();
	void setX(float);
	void setY(float);
	float getX();
	float getY();
	bool checkCol(Bullet& a, Bullet& b);
};