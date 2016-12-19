#pragma once
#include "SimpleDraw.h"
using namespace std;
typedef struct BulletPos
{
	float posX;
	float posY;
}BulletPos;


class Bullet
{
	BulletPos *bullets;
	int bulletnum;
public:
	Bullet(void);
	void addBullet(int x,int y);
	//void realloc (int,int);
	void drawBullet (int);
	void setX(float);
	void setY(float);
	float getX();
	float getY();
	int getNum();
	void drawBulletTri (int x,int y);
	~Bullet(void);
};
