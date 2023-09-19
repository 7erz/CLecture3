#pragma once
#include <iostream>
#include "Unit.h"
using namespace std;

class Firebat : public Unit
{
public:
	Firebat();
	void Skill() override;
	void SetHp(int value) override;
	int GetHp() override;
	void setMaxHp() override;
	int GetMaxHp() override;
	string GetName() override;
};

