#include <iostream>
#include <ctime>
#include "SimpleDraw.h"
#include "Player.h"
#include "CircleEnemy.h"
#include "Blocks.h"
#include "LifeUp.h"
#include "TriangleEnemy.h"
#include "Bullet.h"
#include "EnemyBullet.h"
using namespace std;



int main()
{
	setWindowSize(1000, 700);
	Blocks blocks;
	Player player;
	CircleEnemy a[3] = { CircleEnemy(210,300),CircleEnemy(400,300),CircleEnemy(590,300)};
	LifeUp lifeup(500, 150);
	TriangleEnemy* tri1 = new TriangleEnemy(275,480);
	TriangleEnemy* tri2 = new TriangleEnemy(675,480);
	Bullet b;
	EnemyBullet t1,t2;
	int loop = 0;

	while(true)
	{
		useBrush(1,RGB(0,0,0));		
		drawRectangle(0,0,1000,700);
		useBrush(1,RGB(255,255,255));
		drawRectangle(100, 100, 900, 600);

		a[0].move();
		a[1].move();
		a[2].move();
		tri1->move();
		tri2->move();

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
		if(getKey(' ') && loop == 10)
		{
			b.addBullet(player.getX(),player.getY()-50);
			loop = 0;
		}
		b.deletePassing();
		t1.deletePassing();
		t2.deletePassing();
		tri2->checkCol(b);
		if(tri1->isAlive())
		{
			tri1->drawTriangle(t1);
			for(int i=0;i<=t1.getNum();i++)
				t1.drawBullet(i);
		}
		else
		{
			t1.deleteAll();
		}
		tri2->checkCol(b);
		if(tri2->isAlive())
		{
			tri2->drawTriangle(t2);
			for(int i=0;i<=t2.getNum();i++)
				t2.drawBullet(i);
		}
		else
		{
			t2.deleteAll();
		}
		blocks.checkCol(b);
		player.drawPlayer();
		a[0].drawEnemyCircle();
		a[1].drawEnemyCircle();
		a[2].drawEnemyCircle();
		blocks.drawBlocks();
		lifeup.drawLifeUp();


		for(int i=0;i<=b.getNum();i++)
			b.drawBullet(i);

		if(loop < 10)
			loop++;
		Sleep(40);
	}
}