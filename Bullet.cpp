#include "Bullet.h"
Bullet::Bullet(void)
{
	bulletnum=0;
	bullets=new BulletPos [bulletnum+1];
}
Bullet::~Bullet(void)
{
	delete [] bullets;
}
void Bullet::addBullet(int x,int y)
{
	bullets[bulletnum].posX=x;
	bullets[bulletnum].posY=y;

	bulletnum++;

	BulletPos *temp = new BulletPos [bulletnum+1];
	for(int i=0;i<bulletnum;i++)
		temp[i]=bullets[i];
	delete [] bullets;
	bullets=temp;

}

void Bullet::drawBullet (int i)
{

	useBrush(1, RGB(255,0,0));
	drawRectangle(bullets[i].posX,bullets[i].posY,bullets[i].posX+5,bullets[i].posY+10);
	Sleep(50);
	bullets[i].posY-=10;
}
void Bullet::drawBulletTri (int x,int y)
{
	int k = x;
	int l = y + 30;
	while (l != 600)
	{
		useBrush(1, RGB(255,0,0));
		drawRectangle(k, l, k + 5, l + 10);
		Sleep(50);
		useBrush(0, RGB(255,255,255));
		drawRectangle(k, l, k + 5, l + 10);
		l = l + 30;
	}
}

int Bullet::getNum ()
{
	return bulletnum;
}