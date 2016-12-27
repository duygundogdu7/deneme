#define _CRT_SECURE_NO_WARNINGS

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
#include <ctype.h>
using namespace std;

void ClearScreen()
{
	useBrush(1, RGB(0, 0, 0));
	drawRectangle(0, 0, 1000, 700);
	useBrush(1, RGB(255, 255, 255));
	drawRectangle(100, 100, 900, 600);
}

void Winner(int& score)
{
	ClearScreen();
	char a[20];
	drawText(400, 300, "Y O U  W I N");
	drawText(400, 390, "Your Score: ");
	drawText(500, 390, _itoa(score, a, 10));
	while (true)
	{
	}
}

void GameOver(int& score)
{
	ClearScreen();
	char a[20];
	drawText(400, 300, "G A M E  O V E R");
	drawText(400, 390, "Your Score: ");
	drawText(500, 390, _itoa(score, a, 10));
	while (true)
	{			}
}

void ShowScore(int& score, int health)
{
	if (score < 0)
		score = 0;
	char a[20];
	drawText(100, 50, "Score: ");
	drawText(150, 50, _itoa(score,a,10));
	char b[20];
	drawText(200, 50, "Health: ");
	drawText(250, 50, _itoa(health, a, 10));
}

void StartScreen()
{
	drawText(350, 300, "KILL ALL THE OBJECTS TO WIN");
	drawText(350, 320, "A - D TO MOVE, SPACE TO FIRE");
	drawText(350, 380, "PRESS ANY KEY TO CONTINUE");
	while(!getKey())
	{ }
}

int main()
{
	setWindowSize(1000, 700);
	Blocks blocks;
	Player player;
	CircleEnemy a[3] = { CircleEnemy(210,300),CircleEnemy(400,300),CircleEnemy(590,300) };
	LifeUp lifeup(500, 150);
	TriangleEnemy* tri1 = new TriangleEnemy(275, 480);
	TriangleEnemy* tri2 = new TriangleEnemy(675, 480);
	Bullet b;
	EnemyBullet t1, t2;
	int loop = 0;
	int score = 0;
	int objcounter = 21;

	StartScreen();

	while (true)
	{
		ClearScreen();
		ShowScore(score, player.getHealth());

		a[0].move();
		a[1].move();
		a[2].move();

		if (getKey('W'))
		{
			player.move(DIRECTION_UP);
		}
		if (getKey('S'))
		{
			player.move(DIRECTION_DOWN);
		}
		if (getKey('A'))
		{
			player.move(DIRECTION_LEFT);
		}
		if (getKey('D'))
		{
			player.move(DIRECTION_RIGHT);
		}
		if (getKey(' ') && loop == 10)
		{
			b.addBullet(player.getX(), player.getY() - 50);
			loop = 0;
		}
		b.deletePassing();

		if (!player.checkCol(t1, t2))
		{
			GameOver(score);
			break;
		}
		static bool tri1alive = true;
		static bool tri2alive = true;
		if (tri1->isAlive())
		{		
			tri1->move();
			tri1->checkCol(b,score,objcounter);
			tri1->drawTriangle(t1);
			t1.deletePassing();
			for (int i = 0;i <= t1.getNum();i++)
				t1.drawBullet(i);
		}
		else if (tri1alive)
		{
			//t1.deleteAll();
			tri1alive = false;
		}	
		if (tri2->isAlive())
		{			
			tri2->move();
			tri2->checkCol(b,score, objcounter);
			tri2->drawTriangle(t2);
			t2.deletePassing();
			for (int i = 0;i <= t2.getNum();i++)
				t2.drawBullet(i);
		}
		else if (tri2alive)
		{
			//t2.deleteAll();
			tri2alive = false;
		}
		

		blocks.checkCol(b,score, objcounter);
		player.drawPlayer();
		a[0].drawEnemyCircle();
		a[1].drawEnemyCircle();
		a[2].drawEnemyCircle();
		a[0].checkCol(b,score);
		a[1].checkCol(b,score);
		a[2].checkCol(b,score);
		blocks.drawBlocks();
		if (lifeup.isAlive())
		{
			lifeup.checkCol(b, score, objcounter);
			lifeup.drawLifeUp();
		}


		for (int i = 0;i <= b.getNum();i++)
			b.drawBullet(i);

		if (loop < 10)
			loop++;

		if (objcounter == 0)
		{
			Winner(score);
			break;
		}
		Sleep(40);
	}

	return 0;
}