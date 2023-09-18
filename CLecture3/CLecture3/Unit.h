#pragma once
class Unit
{
public:
	virtual int GetHp() = 0;
	virtual void Skill() = 0;
	virtual void SetHp(int value) = 0;
	

protected:		//메딕은 attack이 없음
	int health;
	int defense;

};

