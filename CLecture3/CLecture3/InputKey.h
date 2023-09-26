#pragma once
#include<conio.h>
#include<Windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

class InputKey
{
private:
	int x;
	int y;
	char key;
public:
	InputKey();
	int GetX();
	int GetY();

	void Move();
	void GotoXY( int x, int y );
};

