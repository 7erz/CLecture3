#include "Vulture.h"

Vulture::Vulture()
{
	health = 80;
	attack = 20;
}

void Vulture::Move() {
	cout << "¹úÃÄ ÀÌµ¿" << endl;
}

void Vulture::Attack()
{
	cout << "¹úÃÄ °ø°İ" << endl;
}

Vulture::~Vulture()
{
	cout << "¹úÃÄ »èÁ¦" << endl;
}
