#pragma once
#include<iostream>
#include"Mechanic.h"
using namespace std;

class Vulture : public Mechanic
{
public:
	Vulture();

#pragma region �Լ��� �������̵�
	//���� Ŭ������ �ִ� �Լ��� (Mechanic)
	//���� Ŭ����(Vulture)���� �������Ͽ� ����ϴ� ���


	void Move();

	virtual void Attack() override;

	//�Լ��� �������̵�� ��� ���迡���� �̷������,
	//���� Ŭ�������� �Լ��� ������ �� �� ���� Ŭ������
	// �Լ� ���¶� ��ġ�ؾ� ��

	~Vulture();

#pragma endregion

};

