#include "Player.h"
#include <conio.h>
#include "SimpleDraw.h"
Player::Player(void)
{
	x=500;
	y=550;
}
void Player::move(void)//player hareket
{
	useBrush(1, RGB(128, 0, 128));
	drawSquare(x,y,70);
	char ch='f';
	while(y<555 && y>515 && x<855 && x>145)
	{
		if(_kbhit())
			ch=_getch();
		if(ch=='d')
		{
			useBrush(1, RGB(128, 0, 128));
			drawSquare(x,y,70);
			Sleep(100);
			useBrush(1, RGB(255,255,255));
			usePen(PS_SOLID,1,RGB(255,255,255));
			drawSquare(x,y,70);
			x=x+10;
		}
		if(ch=='s')
		{
			useBrush(1, RGB(128, 0, 128));
			drawSquare(x,y,70);
			Sleep(100);
			useBrush(1, RGB(255,255,255));
			usePen(PS_SOLID,1,RGB(255,255,255));
			drawSquare(x,y,70);
			y=y+10;
		}
		if(ch=='w' )
		{
			useBrush(1, RGB(128, 0, 128));
			drawSquare(x,y,70);
			Sleep(100);
			useBrush(1, RGB(255,255,255));
			usePen(PS_SOLID,1,RGB(255,255,255));
			drawSquare(x,y,70);
			y=y-10;
		}
		if(ch=='a')
		{
			useBrush(1, RGB(128, 0, 128));
			drawSquare(x,y,70);
			Sleep(100);
			useBrush(1, RGB(255,255,255));
			usePen(PS_SOLID,1,RGB(255,255,255));
			drawSquare(x,y,70);
			x=x-10;
		}
	}
	useBrush(1, RGB(128, 0, 128));
	drawSquare(x,y,70);
}