#pragma once
#include<iostream>
#include"Item.h"
using namespace std;
class Inventory
{
private:
	int x, y;
	int size;
	Item* items;


public:
	Inventory(int x, int y);

	void MakeInven();
};

