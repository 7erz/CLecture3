#pragma once
#include<iostream>
using namespace std;

class Player
{
private:
	int money = 30000;
	friend class Bank;
public:
	void ShowMoney();
};

