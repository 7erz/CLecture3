#include "Firebat.h"

Firebat::Firebat() {
	maxHp = 50;
	health = 50;
	unitName = "���̾";
}

void Firebat::Skill()
{
	cout << "������" << endl;
}

void Firebat::SetHp(int value)
{
	//0~100������ ����
	if (value >= 0 && value <= maxHp) {
		health = value;
	}
	else {
		cout << "�߸��� �� �Է�!" << endl;
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
