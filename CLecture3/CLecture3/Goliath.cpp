#include "Goliath.h"

Goliath::Goliath()
{
	health = 125;
	attack = 12;
}

void Goliath::Move() {
	cout << "°ñ¸®¾Ñ ÀÌµ¿" << endl;
}

void Goliath::Attack() {
	cout << "°ñ¸®¾Ñ °ø°Ý" << endl;
}

Goliath::~Goliath()
{
	cout << "°ñ¸®¾Ñ »èÁ¦" << endl;
}
