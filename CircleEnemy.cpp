#include "CircleEnemy.h"
#include "SimpleDraw.h"


int CircleEnemy::numberofenemies = 0;
CircleEnemy::CircleEnemy(float a,float b)
{
	x=a;
	y=b;
	frames = 40;
	rightdir = true;
	numberofenemies++;
	alive = true;
}
void CircleEnemy::move(void)
{
	if(frames > 0)
	{
		x = x + 5;
		frames--;
	}
	else if (frames < 0)
	{		
		x = x - 5;
		frames++;
	}
	else if (frames == 0)
	{
		if(rightdir)
		{
			rightdir = false;
			frames = -40;
		}
		else
		{
			rightdir = true;
			frames = 40;
		}
	}
}

void CircleEnemy::drawEnemyCircle()
{
	useBrush(1, RGB(0, 0, 205));
	drawCircle(x,y,20);
}
bool CircleEnemy::isAlive()
{
	return alive;
}