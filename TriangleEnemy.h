#pragma once
#include "Bullet.h"
#include "SimpleDraw.h"
#include "CircleEnemy.h"

class EnemyBullet;

class TriangleEnemy : public CircleEnemy
{
private:
	int c;

public:
	Bullet b;
	TriangleEnemy(float, float);
	void drawTriangle(EnemyBullet& bullet);
	void drawTriangleBullet();
	bool checkCol(Bullet& a, int& score, int& cnt);

};