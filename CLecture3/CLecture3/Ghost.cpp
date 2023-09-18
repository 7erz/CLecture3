#include "Ghost.h"

void Ghost::Skill()
{
	cout << "클로킹" << endl;
}

void Ghost::SetHp(int value)
{
	//0~100사이의 값만
	if (value >= 0 && value <= 100) {
		health = value;
	}
	else {
		cout << "잘못된 값 입력!" << endl;
	}
}

int Ghost::GetHp()
{
	return health;
}
