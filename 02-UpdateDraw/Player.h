#pragma once


class  Player
{
public:
	bool active = true;
	float x;
	float y;
	void update();
	void draw();
private:

};
class Player2
{
public:
	bool active2 = false;
	float x;
	float y;
	void update();
	void draw();
private:

};
class Circle
{
public:
	bool active = true;
	float posX;     // position on the x-axis
	float posY;     // position on the y-axis

	float radius;   // describes the size of the circle

	void draw();

};
class Line
{
public:
	bool active = true;
	float startX;   // start-position on the x-axis
	float startY;   // start-position on the y-axis

	float endX;     // end-position on the x-axis
	float endY;     // end-position on the y-axis

	void draw();

};
class Box
{
public:
	bool active = true;
	float sX;
	float sY;
	float eX;
	float eY;

	float sX2;
	float sY2;
	float eX2;
	float eY2;

	float sX3;
	float sY3;
	float eX3;
	float eY3;

	float sX4;
	float sY4;
	float eX4;
	float eY4;

	void update();
	void draw();



};

