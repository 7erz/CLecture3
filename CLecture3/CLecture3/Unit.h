#pragma once
class Unit
{
public:
	virtual int GetHp() = 0;
	virtual void Skill() = 0;
	virtual void SetHp(int value) = 0;
	

protected:		//�޵��� attack�� ����
	int health;
	int defense;

};

