#pragma once
#include "Bullet.h"
#include "SimpleDraw.h"
#include "CircleEnemy.h"

class TriangleEnemy : public CircleEnemy
{
private:
	
public:
	Bullet b;
	TriangleEnemy(float,float);
	void drawTriangle();
	void drawTriangleBullet();

};

