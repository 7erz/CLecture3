#include "Goliath.h"

Goliath::Goliath()
{
	health = 125;
	attack = 12;
}

void Goliath::Move() {
	cout << "�񸮾� �̵�" << endl;
}

void Goliath::Attack() {
	cout << "�񸮾� ����" << endl;
}

Goliath::~Goliath()
{
	cout << "�񸮾� ����" << endl;
}
