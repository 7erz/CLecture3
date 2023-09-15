#pragma once
#include<iostream>
#include"Mechanic.h"

using namespace std;

class SiegeTank : public Mechanic
{
public:
	SiegeTank();

	void Move();

	virtual void Attack() override;

	~SiegeTank();
};

