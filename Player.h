#pragma once

enum Directions
{
	DIRECTION_DEFAULT,
	DIRECTION_UP,
	DIRECTION_DOWN,
	DIRECTION_LEFT,
	DIRECTION_RIGHT,
};

class Player
{
	float x,y;//karenin ortas�n�n koordinatlar�
public:
	Player(void);
	void move (int direction);
	void drawPlayer();
};

