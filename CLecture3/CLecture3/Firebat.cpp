#include "Firebat.h"

void Firebat::Skill()
{
	cout << "������" << endl;
}

void Firebat::SetHp(int value)
{
	//0~100������ ����
	if (value >= 0 && value <= 100) {
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
