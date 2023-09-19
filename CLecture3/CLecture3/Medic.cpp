#include "Medic.h"

Medic::Medic() {
	maxHp = 60;
	health = 60;
	unitName = "메딕";
}

void Medic::Skill()
{
	cout << "힐" << endl;
}

void Medic::SetHp(int value)
{
	//0~100사이의 값만
	if (value >= 0 && value <= maxHp) {
		health = value;
	}
	else {
		cout << "잘못된 값 입력!" << endl;
	}
}

int Medic::GetHp()
{
	return health;
}

void Medic::setMaxHp()
{
	health = maxHp;
}

int Medic::GetMaxHp()
{
	return maxHp;
}

string Medic::GetName()
{
	return unitName;
}
