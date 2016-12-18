#include "Bullet.h"


Bullet::Bullet(void)
{
}


Bullet::~Bullet(void)
{
}

//void Bullet::realloc()
//{
// BulletPos *temp=new BulletPos [bulletnum+1];
// for (int i = 0;i < bulletnum;i++)
// {
//  temp[i] = bullets[i];
// }
// delete[] bullets;
// bullets=temp;
//}
//void Bullet::drawBullet ()
//{
//}
void Bullet::setX(float a)
{
 p.posX = a;
}
void Bullet::setY(float b)
{
 p.posY = b;
}
float Bullet::getX()
{
 return p.posX;
}
float Bullet::getY()
{
 return p.posY;
}