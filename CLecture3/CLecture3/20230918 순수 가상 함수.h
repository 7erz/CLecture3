#pragma once
#include<iostream>
#include"Marine.h"
#include"Firebat.h"
#include"Ghost.h"
#include"Medic.h"
using namespace std;

#pragma region �Լ��� �����ε�
//���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű�������
//���� �����Ͽ� ���� ���� ������ �� �ִ� ���

void Calculator(int x, int y) {
	cout << "x + y = " << x + y << endl;

}

void Calculator(float x, float y) {
	cout << "x + y = " << x + y << endl;

}

void Calculator(char x, char y) {
	cout << "x + y = " << x + y << endl;

}

//�Լ��� �����ε��� ��� �Լ��� �Ű� ������ �����ϴ�
//�μ��� ���¸� ���� ȣ���ϹǷ�,  
//��ȯ������ �Լ��� �����ε��� ������ �� ����.
//int Calculator(float x, float y) {
//
//}




#pragma endregion

#pragma region ���� ���� �Լ�
//virtual void Skill() = 0		//�̷��� �ϳ��� �ִٸ� �߻�Ŭ����
//�ڽ�Ŭ������ ������Ŵ
//�ڽ�Ŭ������ ���Ǹ� ���� ������ ������ ��
//�ڽ� Ŭ�������� void Skill() { }�� ������ ��


#pragma endregion
void Recovery(Unit* unit) {
	unit->setMaxHp();
}


int main() {

#pragma region �Լ��� �����ε�
	//Calculator('A', 'B');		//�ƽ�Ű�ڵ� ������ ��
	//Calculator(10, 20);
	//Calculator(7.5f, 6.25f);
#pragma endregion

#pragma region ���� ���� �Լ�
	//�Լ��� ���� �� �� ������, �ش� Ŭ�������� ������ �� ����
	//��ӹ��� ���� Ŭ�������� �ݵ�� �����Ǹ� �ؾ��ϴ� ��� �Լ�

	/*Unit* unitPtr = new Marine;

	unitPtr->Skill();
	unitPtr->SetHp(100);
	cout << unitPtr->GetHp() << endl;*/
#pragma endregion

#pragma region ����
	int num;
	Unit* unit[3] = { nullptr };
	int unitCount = 0;
	int isBecon = 0;


	while (unitCount < 3) {
		cout << "���� ���� ���� : ";
		cin >> num;

		switch (num) {
		case 1:
			unit[unitCount] = new Marine();
			break;
		case 2:
			unit[unitCount] = new Firebat();
			break;
		case 3:
			unit[unitCount] = new Ghost();
			break;
		case 4:
			unit[unitCount] = new Medic();
			break;
		default:
			cout << "���ܰ�" << endl;
			continue;
		}

		unit[unitCount]->GetDamage();
		cout << unit[unitCount]->GetName() << endl;

		cout << endl;
		cout << "����� ������ ü���� ���ҵǾ����ϴ�. (0 : ���, 1 : ������)" << endl;
		cout << "ü���� ȸ���Ϸ� ������ �̿��Ͻðڽ��ϱ�?  : ";
		cin >> isBecon;

		switch (isBecon) {
		case 0:
			//unit[unitCount]->setMaxHp();
			Recovery(unit[unitCount]);
			cout << "�ش� ������ ü���� ��� ȸ���߽��ϴ�." << endl << endl;
			break;
		case 1:
			cout << "������ �̿����� �ʾ� ü���� ȸ������ �ʽ��ϴ�." << endl << endl;
			break;
		default:
			cout << "���ܰ�!!" << endl;
			continue;
		}

		unitCount++;

	}
	cout << endl << endl;

	for (int i = 0; i < unitCount; i++) {
		cout << i + 1 << "��° ������ " << unit[i]->GetName() << "�̸�, " << endl;
		cout << unit[i]->GetName() << "�� �ִ� ü���� " << unit[i]->GetMaxHp() << "�̸�, " << endl;
		cout << "���� ü���� " << unit[i]->GetHp() << "�Դϴ�." << endl << endl;
	}

	cout << "���α׷� ����..." << endl;

	//ȸ�� ���ܿ� ������ ���� fullhp����� �ϱ�
	//�����Ǹ� ü���� �Ϻ� ����
	//void Recovery(Unit* unit){}		//�Ű� ����	//CLecture3.cpp�� �����
	// 
	//Marine marine = new Marine;


#pragma endregion




	return 0;
}