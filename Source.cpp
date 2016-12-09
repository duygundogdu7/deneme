#include<iostream>
#include "SimpleDraw.h"
#include "Player.h"
#include "CircleEnemy.h"

using namespace std;
int main()
{
	//window
	setWindowSize(1000, 700);
	//rectangle
	drawRectangle(100, 100, 900, 600);
	// Ellipse (xCenter,yCenter,xRadius,yRadius)
	useBrush(1, RGB(0, 100, 0));
	drawEllipse(500, 150, 25, 35);
	useBrush(1, RGB(240, 128, 128));

	//KARELER
	for(int j=240;j<=370;j=j+130)
	{
		for(int i=190;i<=815;i=i+155)
			drawSquare(i, j, 50);
	}
	// DÝKDÖRTGENLER
	useBrush(1, RGB(127, 255, 212));
	for(int j=215;j<=345;j=j+130)
	{
		for(int i=210;i<=675;i=i+155)
			drawRectangle(i, j, i+110, j+50);
	}
	//HAREKET EDECEK ÜÇGENLER (BUNLARIN HAKETÝNÝ +50 YAPABÝLÝRÝZ GÝBÝ DURUYOR)
	useBrush(1, RGB(255, 0, 0));
	//triangle 1
	int k[][2] = { { 300,480 },{ 270,440},{ 250,480},{ 300,480 } };
	drawPolygon(k, 4);
	//triangle 2
	int a[][2] = { { 700,480 },{ 670,440 },{ 650,480 },{ 700,480 } };
	drawPolygon(a, 4);

	/*CircleEnemy c1(210,300),c2(400,300),c3(590, 300),c4(780,300);
	c1.move();
	c2.move();
	c3.move();
	c4.move();*///bu kýsmý acyýðýmýzda circle hareket ediyor fakat move fonksiyonu içine 1 yazdýðým için loop asla bitmiyor ve kare hiç çizilmiyor oraya tüm hareketlileri ayni anda calýþtýracak kosul býlunmalý!!!
	Player p1;
	p1.move();

	getchar();
	getchar();
}