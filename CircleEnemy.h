#pragma once
class CircleEnemy
{
protected:	
	bool alive;
	float x,y;
	int frames;
	bool rightdir;
	static int numberofenemies;
public:

	CircleEnemy(float,float);
	void move(void);
	void drawEnemyCircle();
	bool isAlive();
	
};

