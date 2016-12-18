#pragma once

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
	~Bullet(void);
};

