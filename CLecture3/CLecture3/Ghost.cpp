#include "Ghost.h"

Ghost::Ghost() {
	maxHp = 45;
	health = 45;
	unitName = "��Ʈ";
}

void Ghost::Skill()
{
	cout << "Ŭ��ŷ" << endl;
}

void Ghost::SetHp(int value)
{
	//0~100������ ����
	if (value >= 0 && value <= maxHp) {
		health = value;
	}
	else {
		cout << "�߸��� �� �Է�!" << endl;
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
