#pragma once
#include<iostream>
#include"Mechanic.h"
#include"Vulture.h"
#include"SiegeTank.h"
#include"Goliath.h"
using namespace std;

#pragma region ������
//���� ���� ���� �ٸ� ��ü�� ������ �����
//���� �ٸ� ������� ó���� �� �ִ� �۾�

//�������� ������ ������ �Լ��� �Ӽ��� �����Ǵ�
//���� ���ε��� ���� �ʰ�, ���� �ð��� �Լ���
//�Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� ��

#pragma endregion


int main() {
#pragma region �������̵�
	/*Mechanic mechanic;
	mechanic.Move();

	Vulture vulture;
	vulture.Move();*/
#pragma endregion

#pragma region ���� �Լ�
	//����ϴ� Ŭ���� ������ ���� ������ �Լ���
	//������ �� �� �ִ� �Լ�

	/*Mechanic* mechanic1 = new Vulture;*/		//mechanic1 = 8����Ʈ �ּҰ� ����
	//Mechanic = �������� ������ ������ ���ؼ��� (��ī�б����� ����)
	//float* a = new double �� float�� double�� �� �о�ü� ���°� ó��
	//cout << "��ī�� ũ�� : " << sizeof(Mechanic) << endl;		//4byte �ڷ��� 2�� + 8byte ������ 1�� 
	//cout << "���� ũ�� : " << sizeof(Vulture) << endl;			//16byte
	//mechanic1->Move();		//���Ĵ� ���� ����
	//mechanic1->Attack();

	//���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������
	//���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� ������,
	//���� �����ڴ� ������ �����ؾ� ��

	//Vulture
	//Mechanic
	//Vfptr		8byte

	//�����Լ� ���̺�									[�θ� Ŭ������ ���� �Լ�]
	//�Լ��� �̸�	->		�Լ��� �ּ�					00XX00FF
	//vpptr�� ���� ����		(�ڽ� Ŭ���� ����Ŵ)		[�ڽ� Ŭ������ ���� �Լ�]
	//													00BB05FF

	//����� ����� vfptr�� �ڽ��� �̸��� Vulture�� ���� Vulture�� �ּҷ� ���� ȣ���� �޴´�
	//ȣ���� mechanic->Attack()
#pragma endregion

#pragma region ��Ÿ ���丮 �����
		//1.��Ÿũ����Ʈ ���丮 ����
	//int selNum = 0;
	//cin >> selNum
	//1�� ���ý� ����, 2�� ������ũ, 3�� �񸮾�
	//����ó�� = �ٽ� ���� �Է�

	//������ ȣ��, attack �Լ�(������ �޶�� ��)
	//5������ �Է� ���� �� �ִ�.(����ó�� = Ƚ�� ġ�� ����. �� ���Ĵ� ����)
	/*int selNum;
	Mechanic* mechanic = nullptr;
	int totcount = 0;



	while (totcount < 5) {
		cout << "������ ���� ���� : ";
		cin >> selNum;
		switch (selNum) {
		case 1:
			mechanic = new Vulture;
			//totcount++;
			break;
		case 2:
			mechanic = new SiegeTank;
			//totcount++;
			break;
		case 3:
			mechanic = new Goliath;
			//totcount++;
			break;
		default:
			cout << "���ܰ�!!" << endl;
			continue;		//�ٽ� ���� �ö�
			//���� ��
			//Mechanic* mechanic = nullptr;
			//cout << "���ܰ�!!" << endl;
		}

		totcount++;
		mechanic->Attack();
		//���� ��
		if (selNum == 1) {
			mechanic = new Vulture;
			totcount++;
		}
		else if (selNum == 2) {
			mechanic = new SiegeTank;
			totcount++;
		}
		else if (selNum == 3) {
			mechanic = new Goliath;
			totcount++;
		}
		else {
			Mechanic* mechanic = new Mechanic;
			cout << "���ܰ�!!" << endl;
		}
		if (selNum >= 1 && selNum <= 3) {
			mechanic->Attack();
		}


	}
	delete mechanic;
	cout << "���α׷� ����..." << endl; */

	//���� �Լ��� ��� ���� �Լ� ���̺��� ����Ͽ�
	//ȣ��Ǵ� �Լ��� ���� �ð��� �����ϸ�
	//�������� ����� �Լ��� ���� �Լ��� ������ �� ����.

#pragma endregion

#pragma region ���� �Ҹ���
	//��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� �������
	//��� ȣ��Ǵ� �Ҹ���

	Mechanic* unit1 = new Vulture;		//unit1 _vfptr [1] vector deleting destructor
	//Vulture::Attack			  ��) 0x00007ff6bfb811c2	
	//Vulture::Destructor �� �ּ� ��) 0x00007ff6bfb81555
	Mechanic* unit2 = new SiegeTank;
	Mechanic* unit3 = new Goliath;


	delete unit1;	//�θ� �ۿ� �������� ����
	delete unit2;	//�Ҹ��ڰ� ����Ǹ� ��ī�� ������ �� (�θ� �Ҹ��߱� ����)
	delete unit3;	//�θ𿡰� virtual�� �ٿ��� ���������� ������ ��

	//���� �Ҹ��ڴ� ��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ� 
	//���� ���� �ǰ� ���� Ŭ������ �Ҹ��ڰ� ����Ǿ�� �ϱ� ������
	//���� �ð��� �޸𸮿� �Ҵ�� ��ü�� Ȯ���ϰ� ���ʴ�� �Ҹ���Ѿ� ��

#pragma endregion



	return 0;
}