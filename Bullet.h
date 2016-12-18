#pragma once

typedef struct BulletPos
{
 float posX;
 float posY;
}BulletPos;


class Bullet
{
 BulletPos p;
 int bulletnum;
public:
 Bullet(void);
 ~Bullet(void);
 //void realloc ();
 //void drawBullet ();
 void setX(float);
 void setY(float);
 float getX();
 float getY();
};
