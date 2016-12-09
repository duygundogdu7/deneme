#include "CircleEnemy.h"
#include "SimpleDraw.h"

CircleEnemy::CircleEnemy(int a,int b)
{
	x=a;
	y=b;
}
void CircleEnemy::move(void)//cirle enemy hareket için
{
	while(1)//parantez içine öyle bir þey yazmalýyýz ki tüm cirlelar ayný anda hareket etsin
	{
		useBrush(1, RGB(0, 0, 205));
		drawCircle(x,y,20);
		Sleep(550);
		useBrush(1, RGB(255,255,255));
		usePen(PS_SOLID,1,RGB(255,255,255));
		drawCircle(x,y,20);
		x=x+40;
		useBrush(1, RGB(0, 0, 205));
		drawCircle(x,y,20);
		Sleep(550);
		useBrush(1, RGB(255,255,255));
		usePen(PS_SOLID,1,RGB(255,255,255));
		drawCircle(x,y,20);
		x=x-40;
		useBrush(1, RGB(0, 0, 205));
		drawCircle(x,y,20);
		Sleep(550);
		useBrush(1, RGB(255,255,255));
		usePen(PS_SOLID,1,RGB(255,255,255));
		drawCircle(x,y,20);
		x=x-40;
		useBrush(1, RGB(0, 0, 205));
		drawCircle(x,y,20);
		Sleep(550);
		useBrush(1, RGB(255,255,255));
		usePen(PS_SOLID,1,RGB(255,255,255));
		drawCircle(x,y,20);
		x=x+40;
	}
}