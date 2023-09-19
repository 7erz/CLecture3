#pragma once
#include<iostream>
#include "Unit.h"
using namespace std;

class Ghost : public Unit
{
public:
	Ghost();
	void Skill() override;
	void SetHp(int value) override;
	int GetHp() override;
	void setMaxHp() override;
	int GetMaxHp() override;
	string GetName() override;
};

