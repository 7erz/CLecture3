#include "Medic.h"

Medic::Medic() {
	maxHp = 60;
	health = 60;
	unitName = "�޵�";
}

void Medic::Skill()
{
	cout << "��" << endl;
}

void Medic::SetHp(int value)
{
	//0~100������ ����
	if (value >= 0 && value <= maxHp) {
		health = value;
	}
	else {
		cout << "�߸��� �� �Է�!" << endl;
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
