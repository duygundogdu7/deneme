#pragma once
#include "Bullet.h"

class EnemyBullet : public Bullet
{
public:
	EnemyBullet();
	~EnemyBullet();

	void drawBullet (int);
};

