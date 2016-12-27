#pragma once
#include "Bullet.h"
class CircleEnemy
{
protected:
	bool alive;
	float x, y;
	int frames;
	bool rightdir;
	static int numberofenemies;
	int c;
public:

	CircleEnemy(float, float);
	void move(void);
	void drawEnemyCircle();
	bool isAlive();
	void checkCol(Bullet& a, int& score);
	//void CircleEnemy::deleteCircleEnemy();

};