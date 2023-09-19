#include "Firebat.h"

Firebat::Firebat() {
	maxHp = 50;
	health = 50;
	unitName = "파이어벳";
}

void Firebat::Skill()
{
	cout << "스팀팩" << endl;
}

void Firebat::SetHp(int value)
{
	//0~100사이의 값만
	if (value >= 0 && value <= maxHp) {
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

void Firebat::setMaxHp()
{
	health = maxHp;
}

int Firebat::GetMaxHp()
{
	return maxHp;
}

string Firebat::GetName()
{
	return unitName;
}
