#pragma once
#include<iostream>
#include<string>
#include<time.h>
#include<vector>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>
#include<deque>
using namespace std;

//#define UP 72
//#define LEFT 75
//#define RIGHT 77
//#define DOWN 80
//
//void GotoXY( int x, int y )
//{
//
//	COORD pos = { x, y };
//
//	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), pos );
//}


#pragma region �ڷᱸ�� ����
//�ڷᱸ��
//�����͵��� ȿ�������� ó���ϱ� ���� ����ϴ� ��
//KEY VALUE �� (����Ƽ�� Dictionary ����)

//���� �����̳�
// 
// std::vector
// ���� �迭 (�˾Ƽ� size�� ũ�Ⱑ ����)
// ��Ÿ�� �߿� ũ�⸦ ���� ���� (�޸𸮸� ���� ����� ��)
// �̰� ����Ƽ������ List<int>
// Managed Heap : �޸� �̸� �Ҵ��ߴٰ� �þ�� 2�辿 �÷� ����
// std::list
// std::deque
//
#pragma endregion

#pragma region ���� �����̳�
//�����͸� �������� �����ϸ�, Ư���� �����̳� ��Ģ�� ���� �Ϲ����� �����̳�
#pragma endregion

int main() {

#pragma region Vector �����̳�
	//vector<int>		vector;//Ŭ���� ��������� �����ؾ��� (int...) ���ÿ� vector ����
	////���� �迭 int, char, float, class
	//// ���ø� <T> ������ ������ int
	//vector.push_back( 10 );
	//vector.push_back( 20 );
	//vector.push_back( 30 );
	////3�� ���� �� ���� 4byte 3���� 12byte ����

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;


	//for ( int i = 0; i < vector.size(); i++ ) {
	//	cout << vector[i] << endl;
	//}

	//vector.push_back( 40 );
	//vector.push_back( 50 );		//���̷�Ʈ�� �ٷ� ������ ������ O(1)
	//// ���� 12����Ʈ �޸𸮴� 2�谡 �þ��
	////������� ����Ǽ� ���� 40�� �׹�° 50�� �ټ���° ������ ��
	////[10][20][30][40][50][]

	//// O(N)�� �����͸� ó���Ҷ� n����ŭ �ɸ���.

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

	//for ( int i = 0; i < vector.size(); i++ ) {
	//	cout << vector[i] << endl;
	//}

	//vector.pop_back();
	////pop_back() : ���� �ڿ� �ִ� ������ ����
	//// [10][20][30][40] : size
	////[10][20][30][40][  ][  ] : capacity
	//vector.pop_back();
	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

	////push_back() : �� �ʿ� ������ �����ϴ� �Լ�
	//

	////[10][20][30][40][50][] ���� 20�� ����� �ȴٸ�
	////[10][30][40][50][][]		�̰� 20�ڸ��� 30�� ����, 30�ڸ��� 40�� ����... �ϴ� �� O(N)

	////LinkedList
	////���� �瓇������ ����Ǿ�����
	////1 <-> 2 <-> 3 <-> 4
	////1 <-> 3 <-> 4
	////2�� delete
#pragma endregion

#pragma region ���� ����
	//�������� 3~5��
	//ȭ��ǥ�� �Է¹޾� ������ �Ѿ�� Ʋ���� �������� ����
	//�ڿ��� ���� popback���ؼ� ��������
	/*int difficulty = 3;
	vector<const char*> arrow;
	int ran = rand() % difficulty;


	int life = 5;
	int arrowKey = 4;


	srand( time( NULL ) );
	for ( int i = 0; i < difficulty; i++ ) {
		int ans = rand() % arrowKey;
		switch ( ans ) {
		case 0 :
			arrow.push_back( "��" );
			break;
		case 1:
			arrow.push_back( "��" );
			break;
		case 2:
			arrow.push_back( "��");
			break;
		case 3:
			arrow.push_back( "��" );
			break;
		}
	}

	//for ( int i = 0; i < difficulty; i++ ) {
	//	cout << arrow[i] << " ";
	//}

	char key = 0;

	while ( arrow.empty() == false ) {

		for ( int i = 0; i < arrow.size(); i++ ) {
			cout << arrow[i] << " ";
		}

		key = _getch();

		if ( key == -32 )
		{
			key = _getch();
		}

		switch ( key )
		{
		case UP: if ( arrow[arrow.size() - 1] == "��" ) {
			arrow.pop_back();
		}
			   break;
		case LEFT: if ( arrow[arrow.size() - 1] == "��" ) {
			arrow.pop_back();
		}
				 break;
		case RIGHT: if ( arrow[arrow.size() - 1] == "��" ) {
			arrow.pop_back();
		}
				  break;
		case DOWN: if ( arrow[arrow.size() - 1] == "��" ) {
			arrow.pop_back();
		}
				 break;
		}
		system( "cls" );
	}*/

#pragma endregion

#pragma region Deque �����̳�
	//Double  Ended Queue�� ����
	//<-[ ][ ][ ][ ][ ]->
	//->			   <-

	//Deque ����
	deque<int> deque;
	deque.push_back( 10 );
	deque.push_back( 20 );
	deque.push_front( 99 );
	deque.push_front( 0 );

	for ( int i = 0; i < deque.size(); i++ ) {
		cout << deque[i] << endl;
	}
#pragma endregion


	return 0;
}