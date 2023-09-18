#include "Medic.h"

void Medic::Skill()
{
	cout << "힐" << endl;
}

void Medic::SetHp(int value)
{
	//0~100사이의 값만
	if (value >= 0 && value <= 100) {
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
