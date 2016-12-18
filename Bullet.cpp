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
void Bullet::addBall(int x,int y)
{
	bullets[bulletnum].posX=x;
	bullets[bulletnum].posY=y;
	/*useBrush(1, RGB(255,0,0));
	drawRectangle(bullets[bulletnum].posX,bullets[bulletnum].posY,bullets[bulletnum].posX+5,bullets[bulletnum].posY+10);*/
	bulletnum++;

	BulletPos *temp = new BulletPos [bulletnum+1];
	for(int i=0;i<bulletnum;i++)
		temp[i]=bullets[i];
	delete [] bullets;
	bullets=temp;

}
//void Bullet::realloc(int x,int y)
//{
//	BulletPos *temp=new BulletPos [bulletnum+1];
//	for (int i = 0;i < bulletnum;i++)
//	{
//		temp[i] = bullets[i];
//	}
//	temp[bulletnum].posX=x;
//	temp[bulletnum].posY=y;
//	bulletnum++;
//	delete[] bullets;
//	bullets=temp;
//}
void Bullet::drawBullet (int i)
{

	useBrush(1, RGB(255,0,0));
	drawRectangle(bullets[i].posX,bullets[i].posY,bullets[i].posX+5,bullets[i].posY+10);
	Sleep(50);
	bullets[i].posY-=10;
}
int Bullet::getNum ()
{
	return bulletnum;
}