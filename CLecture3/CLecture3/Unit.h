#pragma once
#include<iostream>
using namespace std;
class Unit
{
public:
	virtual int GetHp() = 0;
	virtual void Skill() = 0;
	virtual void SetHp(int value) = 0;
	virtual void setMaxHp() = 0;
	virtual int GetMaxHp() = 0;
	void GetDamage();
	virtual string GetName() = 0;
	

protected:		//메딕은 attack이 없음
	string unitName;
	int maxHp;
	int health;
	int defense;

};

