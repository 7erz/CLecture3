#include "Ghost.h"

void Ghost::Skill()
{
	cout << "Ŭ��ŷ" << endl;
}

void Ghost::SetHp(int value)
{
	//0~100������ ����
	if (value >= 0 && value <= 100) {
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
