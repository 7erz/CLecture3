#include "InputKey.h"
#include<iostream>

InputKey::InputKey()
{
	x = 0;
	y = 0;
    key = 0;
}

int InputKey::GetX()
{
    return x;
}

void InputKey::Move()
{
    GotoXY( x, y );

    if ( _kbhit() ) // Ű���� �Է��� Ȯ���ϴ� �Լ�
    {
        key = _getch();

        if ( key == -32 )
        {
            key = _getch();
        }

        switch ( key )
        {
        case UP:
            if ( y > 0 ) y--;
            break;
        case LEFT:
            if ( x > 0 ) x -= 2;
            break;
        case RIGHT:
            if ( x < 8 ) x += 2;
            break;
        case DOWN:
            if ( y < 2 ) y++;
            break;
        }

        // ��ũ���� ����� �Լ�
        system( "cls" );
    }
}

int InputKey::GetY()
{
    return y;
}

void InputKey::GotoXY( int x, int y )
{

	COORD pos = { x, y };

	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), pos );
}