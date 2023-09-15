#pragma once
#include<iostream>
#include"Mechanic.h"


class Goliath : public Mechanic
{
public:
	Goliath();

	void Move();

	virtual void Attack() override;

	~Goliath();

};

