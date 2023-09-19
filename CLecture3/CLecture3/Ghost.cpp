#include "Ghost.h"

Ghost::Ghost() {
	maxHp = 45;
	health = 45;
	unitName = "고스트";
}

void Ghost::Skill()
{
	cout << "클로킹" << endl;
}

void Ghost::SetHp(int value)
{
	//0~100사이의 값만
	if (value >= 0 && value <= maxHp) {
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

void Ghost::setMaxHp()
{
	health = maxHp;
}

int Ghost::GetMaxHp()
{
	return maxHp;
}

string Ghost::GetName()
{
	return unitName;
}
