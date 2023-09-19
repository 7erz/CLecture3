#include "Marine.h"

Marine::Marine() {
	maxHp = 40;
	health = 40;
	unitName = "해병";
}

void Marine::Skill()
{
	cout << "스팀팩" << endl;
}

void Marine::SetHp(int value)
{
	//0~100사이의 값만
	if (value >= 0 && value <= maxHp) {
		health = value;
	}
	else {
		cout << "잘못된 값 입력!" << endl;
	}

	
}

int Marine::GetHp()
{
	return health;
}

void Marine::setMaxHp()
{
	health = maxHp;
}

int Marine::GetMaxHp()
{
	return maxHp;
}

string Marine::GetName()
{
	return unitName;
}
