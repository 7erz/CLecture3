#pragma once
#include<iostream>
#include "Unit.h"
using namespace std;

class Marine :public Unit
{
public:
	void Skill() override;
	void SetHp(int value) override;
	int GetHp() override;
};

