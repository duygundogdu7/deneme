#pragma once
class CircleEnemy
{
protected:	
	float x,y;
	int frames;
	bool rightdir;
	static int numberofenemies;
public:

	CircleEnemy(float,float);
	void move(void);
	void drawEnemyCircle();
};

