#pragma once
#include<iostream>
#include"Inventory.h"
#include"InputKey.h"
using namespace std;
#pragma region ���� ��Ģ
//�κ��丮 ĭ�� 15��. ���� 5��, ���� 3��
//ĭ �ȿ��� ������ Ŭ������ ������
//int inven[15]; 0~14
//[][][][][] 5�� ����� �߶� [][][][][] ���� ��Ű��
//[][][][][]
//[][][][][]
//�迭�� 1.2���� �������
//2���� �迭�� 5 * 3 = 15 �̷� ������ �����

//����
//1.Inventory Class ����
//2. ������ ������ �� �ִ� ������ �����̳�
//3. ������ �����̳ʸ� ����ϴ� ����� �����ϰ�,
//������(������)�� ��������� �� ǥ�� �ϱ�.
//4. Item Class ���� name, Price �־�� ��
#pragma endregion

#pragma region 2����
//AddItem(); ������ �߰�
//�ҽ� �»�ܿ� ä��, Ư������ ��

//1.AddItem() �Լ� ����
//int resultX = x / 2;
//int resultY = y * 2;
#pragma endregion

#pragma region 3����
//�ش� �ε����� �������� ����ִٸ�
//AddItem�� ������ �־��ִ� ���)
#pragma endregion




InputKey inputkey;


int main() {
	Inventory inven = { 3,5 };


	for ( int i = 0; i < 3; i++ ) {
		inven.AddItem();
	}



	while ( 1 ) {
		inven.MakeInven();

		inputkey.Move();

		inputkey.GotoXY( 0, 4 );
		inven.selNum( inputkey );
		inven.ShowItem();

		Sleep( 100 );
		system( "cls" );


	}





	return 0;
}