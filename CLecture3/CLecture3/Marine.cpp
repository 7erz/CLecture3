#include "Marine.h"

Marine::Marine() {
	maxHp = 40;
	health = 40;
	unitName = "�غ�";
}

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHp(int value)
{
	//0~100������ ����
	if (value >= 0 && value <= maxHp) {
		health = value;
	}
	else {
		cout << "�߸��� �� �Է�!" << endl;
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
