#pragma once
#include<iostream>
#include"Camera.h"
using namespace std;

#pragma region ���
//���� Ŭ������ �Ӽ��� ���� Ŭ������ ����� �� �ֵ��� �������ִ� ���
//class item		���� Ŭ����
//protected: int price ;

//class Potion : public Item		���� Ŭ����

//Posion Posion ;

class Vehicle {
protected:
	float speed;			//���� ���� (��� ����)
	static int kCount;		//���� ����(static)�� �̿��ؾ��� (�׷��� ������ �������� �ʰ� �޸𸮿��� ������)
	//(�ѹ��� �ʱ�ȭ�� �� ����ؼ� ��� ���� �ϴ�)
	//���α׷� ����� ���� ����� (Ŭ������ �ȵ�) �׷��� ������ �������� kCount�� ���� ��.
	//v1 v2 v3 �� ��������� �� 4byte�� speed�� �޸� ���� kcount 1���� ����

public:
	Vehicle() {
		cout << "Vehicle Object" << endl;
	}

	void Movement() {
		cout << "�̵�" << endl;
	}

	static int SetCount() {
		//speed = 100	ERROR!		�޸𸮰� �ҷ��������� �Ϲ� ������ �˼� ����
		return kCount;		//���������� ���� �� ����
	}

	~Vehicle() {
		cout << "Vehicle Object Disabled" << endl;
	}
};

int Vehicle::kCount = 0;

class Car : public Vehicle {
public:
	Car() {
		carID = 1;
		speed = 100;
		cout << "Car Object" << endl;
	}

	~Car() {
		cout << "Car Object Disabled" << endl;
		cout << "killCount : " << ++kCount << endl;
	}
private:
	int carID;


};

//Ŭ������ ��� ���迡�� ���� Ŭ������ ���� Ŭ������ �Ӽ��� ����� �� ������,
//���� Ŭ������ �޸𸮸� ������ ���·� �޸����� ũ�Ⱑ ������.


#pragma endregion

//����					����
//class.h				class.cpp
//void F();	���� ->	���⼭ ���Ǹ� ��

int main() {
#pragma region ���
	Vehicle vehicle;		//���� Ŭ������ ����

	Car car1;				// �� �� ���� Ŭ���� ����. (�̰� ���ٸ� ����Ŭ������ ������)
	//Car car2;
	//Car car3;

	//cout << "car�� ũ�� : " << sizeof(Car) << endl;
	//cout << "vehicle�� ũ�� : " << sizeof(vehicle) << endl;

	//car1.Movement();

	cout << Vehicle::SetCount() << endl;
#pragma endregion

#pragma region Ŭ���� ����, ����
	//Camera camera;
	//
	//camera.Inform();	//const
#pragma endregion



	return 0;
}