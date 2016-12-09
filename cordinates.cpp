#include<iostream>
#include "SimpleDraw.h"

using namespace std;
int main()
{
	//window
	setWindowSize(1000, 700);
	//rectangle
	drawRectangle(100, 100, 900, 650);
	// Ellipse (xCenter,yCenter,xRadius,yRadius)
	useBrush(1, RGB(0, 100, 0));
	drawEllipse(500, 150, 25, 35);
	useBrush(1, RGB(240, 128, 128));

	//1.SATIRDAKÝ KARELER
	// Square 1
	drawSquare(190, 240, 50);
	// Square 2
	drawSquare(340, 240, 50);
	// Square 3
	drawSquare(495, 240, 50);
	// Square 4
	drawSquare(650, 240, 50);
	// Square 5
	drawSquare(815, 240, 50);


	//1.SATIRDAKÝ DÝKDÖRTGENLER
	useBrush(1, RGB(127, 255, 212));
	// Rectangle 1
	drawRectangle(210, 215, 320, 265);
	// Rectangle 2
	drawRectangle(365, 215, 475,265);
	// Rectangle 3
	drawRectangle(520, 215, 630, 265);
	// Rectangle 4
	drawRectangle(675, 215, 790, 265);
	
	//HAREKET EDECEK OLAN MAVÝ DAÝRELER(+10 EKLERSEK GÜZEL HAREKETLÝ OLUR)
	useBrush(1, RGB(0, 0, 205));
	//Circle 1
	drawCircle(210, 300, 20);
	//Circle 2
	drawCircle(400, 300, 20);
	//Circle 3
	drawCircle(590, 300, 20);
	//circle 4
	drawCircle(780, 300, 20);

	//ÝKÝNCÝ SATIRDAKÝ KARELER 
	useBrush(1, RGB(240, 128, 128));
	// Square 1
	drawSquare(190, 370, 50);
	// Square 2
	drawSquare(340, 370, 50);
	// Square 3
	drawSquare(495, 370, 50);
	// Square 4
	drawSquare(650, 370, 50);
	// Square 5
	drawSquare(815, 370, 50);


	//ÝKÝNCÝ SATIRDAKÝ DÝKDÖRTGENLER
	useBrush(1, RGB(127, 255, 212));
	// Rectangle 1
	drawRectangle(210, 345, 320, 395);
	// Rectangle 2
	drawRectangle(365, 345, 475, 395);
	// Rectangle 3
	drawRectangle(520,345, 630, 395);
	// Rectangle 4
	drawRectangle(675, 345, 790, 395);

	//HAREKET EDECEK ÜÇGENLER (BUNLARIN HAKETÝNÝ +50 YAPABÝLÝRÝZ GÝBÝ DURUYOR)
	useBrush(1, RGB(255, 0, 0));
	//triangle 1
	int k[][2] = { { 300,480 },{ 270,440},{ 250,480},{ 300,480 } };
	drawPolygon(k, 4);
	//triangle 2
	int a[][2] = { { 700,480 },{ 670,440 },{ 650,480 },{ 700,480 } };
	drawPolygon(a, 4);

	//OYUNCU HAREKET EDECEK 
	useBrush(1, RGB(128, 0, 128));
	//playership
	drawSquare(500, 610, 70);



	getchar();
	getchar();
}