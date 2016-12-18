#include <iostream>
#include <ctime>
#include "SimpleDraw.h"
#include "Player.h"
#include "CircleEnemy.h"
#include "Blocks.h"
#include "LifeUp.h"
#include "TriangleEnemy.h"
#include "Bullet.h"
using namespace std;


int main()
{
	setWindowSize(1000, 700);

	Blocks blocks;
	Player player;
	CircleEnemy a[3] = { CircleEnemy(210,300),CircleEnemy(400,300),CircleEnemy(590,300)};
	LifeUp lifeup(500, 150);
	TriangleEnemy tri1(275,480),tri2(675,480);
	Bullet b;

	while(true)
	{
		useBrush(1,RGB(0,0,0));		
		drawRectangle(0,0,1000,700);
		useBrush(1,RGB(255,255,255));
		drawRectangle(100, 100, 900, 600);

		a[0].move();
		a[1].move();
		a[2].move();
		tri1.move();
		tri2.move();

		if(getKey('W'))
		{
			player.move(DIRECTION_UP);
		}
		if(getKey('S'))
		{
			player.move(DIRECTION_DOWN);
		}
		if(getKey('A'))
		{
			player.move(DIRECTION_LEFT);
		}
		if(getKey('D'))
		{
			player.move(DIRECTION_RIGHT);
		}
		if(getKey('P'))
		{
			b.addBall(player.getX(),player.getY()-50);
		}

		player.drawPlayer();
		a[0].drawEnemyCircle();
		a[1].drawEnemyCircle();
		a[2].drawEnemyCircle();
		blocks.drawBlocks();
		lifeup.drawLifeUp();
		tri1.drawTriangle();
		tri2.drawTriangle();
		for(int i=0;i<=b.getNum();i++)
			b.drawBullet(i);
		Sleep(50);
	}
}