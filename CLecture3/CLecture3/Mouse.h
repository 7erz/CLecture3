#pragma once
#include<iostream>
#include"Component.h"
using namespace std;

class Mouse : virtual public Component
{
public:
	Mouse();

	void Input();
	void OnDrag();
};

