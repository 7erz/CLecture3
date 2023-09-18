#pragma once
#include <iostream>
#include "Unit.h"
using namespace std;

class Firebat : public Unit
{
	void Skill() override;
	void SetHp(int value) override;
	int GetHp() override;
};

