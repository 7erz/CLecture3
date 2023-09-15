#pragma once
#include<iostream>
#include"Mechanic.h"
using namespace std;

class Vulture : public Mechanic
{
public:
	Vulture();

#pragma region 함수의 오버라이딩
	//상위 클래스에 있는 함수를 (Mechanic)
	//하위 클래스(Vulture)에서 재정의하여 사용하는 기능


	void Move();

	virtual void Attack() override;

	//함수의 오버라이드는 상속 관계에서만 이루어지며,
	//하위 클래스에서 함수를 재정의 할 때 상위 클래스의
	// 함수 형태랑 일치해야 함

	~Vulture();

#pragma endregion

};

