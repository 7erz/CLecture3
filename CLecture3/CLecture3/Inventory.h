#pragma once
#include<iostream>
#include"InputKey.h"
#include"Item.h"
using namespace std;
class Inventory
{
private:
	int x, y;
	int size;

	int lineX;
	int selectIndex;

	Item* items;


public:
	Inventory(int x, int y);

	void MakeInven();

	void AddItem();

	void selNum(InputKey inputkey);
	void ShowItem();
};

