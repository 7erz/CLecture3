#pragma once
#include<iostream>
using namespace std;

#pragma region final
//����Ŭ�������� �� �̻� �������� �� ������ �����ϴ� ���
//������ ���� ���� ����ϰ� ��

class Hero {
	virtual void BasicSkill() {};
	virtual void MagicSkill() {};

};

class Crusader : public Hero {
	void BasicSkill() {};
	void MagicSkill() final {};
};

class Fighter : public Crusader {
	void BasicSkill() {};
	//void MagicSkill() {};
};

#pragma endregion



int main() {


	return 0;
}