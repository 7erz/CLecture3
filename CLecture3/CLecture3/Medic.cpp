#include "Medic.h"

void Medic::Skill()
{
	cout << "��" << endl;
}

void Medic::SetHp(int value)
{
	//0~100������ ����
	if (value >= 0 && value <= 100) {
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
