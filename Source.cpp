#include<iostream>
#include <ctime>
#include "SimpleDraw.h"
#include "Player.h"
#include "CircleEnemy.h"
#include "Blocks.h"

using namespace std;


int main()
{
	Blocks blocks;
	Player player;
	CircleEnemy a[3] = { CircleEnemy(210,300),
		                 CircleEnemy(400,300),
		                 CircleEnemy(590,300)};
		
		/*(210,300);
	CircleEnemy b(400,300);
	CircleEnemy c(590,300);*/
	setWindowSize(1000, 700);

	
	while(true)
	{
		time_t lastTime;
	    time(&lastTime);

		a[0].move();
		a[1].move();
		a[2].move();

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

		useBrush(1,RGB(255,255,255));		
		drawRectangle(100, 100, 900, 600);

		player.drawPlayer();
		a[0].drawEnemyCircle();
		a[1].drawEnemyCircle();
		a[2].drawEnemyCircle();
		blocks.drawBlocks();

		time_t currentTime, diffTime;
	    time(&currentTime);
		diffTime = difftime(currentTime,lastTime);
		int clock = (int)difftime % 55;
		Sleep(55 - clock);
	}
}