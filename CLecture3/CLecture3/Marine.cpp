#include "Marine.h"

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHp(int value)
{
	//0~100������ ����
	if (value >= 0 && value <= 100) {
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
