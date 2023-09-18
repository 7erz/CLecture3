#include "Firebat.h"

void Firebat::Skill()
{
	cout << "스팀팩" << endl;
}

void Firebat::SetHp(int value)
{
	//0~100사이의 값만
	if (value >= 0 && value <= 100) {
		health = value;
	}
	else {
		cout << "잘못된 값 입력!" << endl;
	}
}

int Firebat::GetHp()
{
	return health;
}
