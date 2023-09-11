#pragma once
#include<iostream>
using namespace std;

#pragma region ����
int data = 100;

namespace A {
	void Attack() {
		cout << "A ������ Attack()" << endl;;
	}
}

namespace B {
	void Attack() {
		cout << "B ������ Attack()" << endl;;
	}
}

void Damage(int hp = 100) {
	hp -= 25;
	cout << "hp �� : " << hp << endl;
}
//�⺻ �Ű������� �����ʿ������� ���� �ؾ� �� (z ����)
void Move(int x, int y, int z = 10) {
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
	cout << "z : " << z << endl;

}

#pragma endregion



int main() {
#pragma region ���� ���� ������
	//���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ���Ǵ� ������

	//���� ���� �����ڴ� ���� ������ ���� �̸��� ����������
	//����Ǿ��� �� ���� ����� ����������� ������ �̸��� 
	//����ϴ� ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʽ��ϴ�.

	//int data = 25;

	//int data = 100;
	//std::cout << "���� ���� data�� �� : " << data << std::endl;
	//std::cout << "���� ���� data�� �� : " << ::data << std::endl;


	//���� ����
	//.h		.cpp
	// ����		����
	//
	// �Ȱ��� �̸� ��ŷ ����
	//
	// include �� ���� �ٿ��ֱ��� �����ϸ� ����
	//


#pragma endregion

#pragma region �̸� ���� (namespace)
	//�Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� ����
	// A �� Attack() / B �� Attack()
	// namespace �� A::Attack()���� ���� (using)
	//std ���� �����ͼ� ���� �� �� ����

	//c#�� ��� Dispose
	//���� ����� �Ҷ� using(���� �ҷ�����){}
	//���ҽ� �� �̹�����Ʈ ��Ʈ���� ��� (�޸� �ٷ� ����)

	//A::Attack();
	//B::Attack();

#pragma endregion

#pragma region �⺻ �Ű�����
	//�Լ��� �Ű� ������ ���� ���޵��� �ʾ��� ��
	//�⺻ ������ �����Ǵ� �Ű� ����

	//int hp = 100;

	//Damage();
	//Move(5, 10);
	////�⺻ �Ű������� �ִ� ��ġ�� �ٽ� ���ο� �μ��� �־��� �� �ִ�.
	//Move(6, 12, 18);

#pragma endregion

#pragma region �ּҰ����
	//38 �� 42�� �ּҰ���� ���� �������� �ɷ� + ������ ���ڱ��� �� ����
	int x;
	int y;
	int top;
	int gop = 1;

	cout << "x �� �Է� : ";
	cin >> x;

	cout << "y �� �Է� : ";
	cin >> y;


	if (x > y) {
		top = x;
	}
	else if (x < y) {
		top = y;
	}


	for (int i = 2; i < top; i++) {
		if (x % i == 0 && y % i == 0) {
			cout << i << "�� ��������." << endl;
			x /= i;
			y /= i;
			gop *= i;
			i--;
		}
	}

	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "�ּ� ����� : " << gop * x * y << endl;



#pragma endregion


	return 0;
}