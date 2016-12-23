#include "Bullet.h"
Bullet::Bullet(void)
{
	bulletnum=0;
	bullets=new BulletPos [bulletnum+1];
}
Bullet::~Bullet(void)
{
	if(bullets != NULL)
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
void Bullet::deleteBullet (int j)
{
	int c=0;
	BulletPos* temp = new BulletPos[bulletnum];
	for(int i=0;i<bulletnum;i++)
	{
		if(i!=j)
		{
			temp[c]=bullets[i];
			c++;
		}
	}
	delete[] bullets;
	bullets = temp;
	bulletnum--;
}
BulletPos* Bullet::getPos()
{
	return bullets;
}

void Bullet::drawBullet (int i)
{

	useBrush(1, RGB(255,0,0));
	drawRectangle(bullets[i].posX,bullets[i].posY,bullets[i].posX+5,bullets[i].posY+10);
	bullets[i].posY-=10;
}
void Bullet::drawBulletTri (int x,int y)
{
	int k = x;
	int l = y + 5;
	useBrush(1, RGB(255,0,0));
	drawRectangle(k, l, k + 5, l + 10);
	l = l + 5;

}

int Bullet::getNum ()
{
	return bulletnum;
}
void Bullet::deletePassing( )
{
	for(int i=0;i<bulletnum;i++)
	{
		if(bullets[i].posY<100)
			deleteBullet(i);
	}
}


