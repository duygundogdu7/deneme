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
protected:
	BulletPos *bullets;
	int bulletnum;
public:
	Bullet(void);
	void addBullet(int x, int y);
	void deleteBullet(int);
	virtual void drawBullet(int);
	void setX(float);
	void setY(float);
	BulletPos* getPos();
	float getX();
	float getY();
	int getNum();
	void drawBulletTri(int x, int y);
	void deleteAll();
	virtual void deletePassing(void);
	~Bullet(void);
};