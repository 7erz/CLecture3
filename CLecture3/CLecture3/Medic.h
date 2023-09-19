#pragma once
#include<iostream>
#include "Unit.h"
using namespace std;


class Medic : public Unit
{
public:
	Medic();
	void Skill() override;
	void SetHp(int value) override;
	int GetHp() override;
	void setMaxHp() override;
	int GetMaxHp() override;
	string GetName() override;
};

