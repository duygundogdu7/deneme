#include "Player.h"
#include <conio.h>
#include "SimpleDraw.h"
Player::Player(void)
{
	x=495;
	y=555;
}
void Player::move(int direction)//player hareket
{	
	if(direction == DIRECTION_RIGHT)
	{						
		x=x+10;
	}
	if(direction == DIRECTION_DOWN)
	{			
		y=y+10;
	}
	if(direction == DIRECTION_UP)
	{
		y=y-10;
	}
	if(direction == DIRECTION_LEFT)
	{
		x=x-10;
	}
}

void Player::drawPlayer()
{
	useBrush(1, RGB(255, 150, 45));
	drawSquare(x,y,50);
	useBrush(1,RGB(255,255,255));
	drawCircle(x-10,y-10,5);
	drawCircle(x+10,y-10,5);
	useBrush(1,RGB(0,0,0));
	drawCircle(x-10,y-8,2);
	drawCircle(x+10,y-8,2);
}
void Player::setX(float a)
{
 x = a;
}
void Player::setY(float b)
{
 y = b;
}
float Player::getX()
{
 return x;
}
float Player::getY()
{
 return y;
}