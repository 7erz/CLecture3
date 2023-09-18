#pragma once
#include<iostream>
#include "Unit.h"
using namespace std;

class Ghost : public Unit
{
	void Skill() override;
	void SetHp(int value) override;
	int GetHp() override;
};

