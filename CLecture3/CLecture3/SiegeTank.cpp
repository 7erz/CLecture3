#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	health = 150;
	attack = 30;
}

void SiegeTank::Move() {
	cout << "시즈탱크 이동" << endl;
}

void SiegeTank::Attack() {
	cout << "시즈탱크 공격" << endl;
}

SiegeTank::~SiegeTank()
{
	cout << "시즈탱크 삭제" << endl;
}
