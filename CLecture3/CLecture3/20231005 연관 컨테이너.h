#pragma once
#include<iostream>
#include<string>
#include<time.h>
#include<vector>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>

#include<vector>
#include<list>
using namespace std;

int main() {
#pragma region ���ڿ� (string)

	//const char * name;		������ ������ ����, ���ÿ� �̹� �����Ͱ� ���� 
	//name �����Ͱ� rodata �޸� ������ �����ּ� ����Ű�� �� 

	//string content		//���ÿ� ����
	//���̶�� ������ �Ҵ� (������ �ø����� ����) 8~16����Ʈ�� ���ÿ� �ø��� �� �̻󿡴� ���� �ø�
	//���� �����Ǹ� ������ �ִ��� �����ǰ� ���ο� ������ ã��

	//string content = "Content";
	//cout << content << endl;
	//cout << content.size() << endl;		//������ �� ���ڰ� ����

	//content = "League";
	//cout << content << endl;
	//cout << content.size() << endl;		//������ �� ���ڰ� ����

	//cout << content.find( "ag" ) << endl;


	//cout << content.max_size() << endl;
#pragma endregion



#pragma region ���� �����̳�
	//Key�� Value�� �ϳ��� �������� �̷���� �����̳� 

	//List�� �� ������ ����. O(n) ���� ���� ����Ʈ

	//��)

	//struct Node {
	//	int data;
	//	Node* next;	//����
	//	Node* prev;	//�����

	//};

	list<int> dataList;
	dataList.push_back( 10 );
	dataList.push_front( 50 );
	dataList.push_front( 25 );
	dataList.push_back( 33 );

	//���ͷ����� �ݺ���, ������
	//dataList.begin() : ù ��° �ּ� ��ȯ
	//dataList.end() : ������ �� ���� �ּҸ� ��ȯ

	//begin						end
	//[25]  [50]  [10]  [33] 

	dataList.pop_back();
	//[25]  [50]  [10]

	list<int>::iterator iter;

	iter = dataList.begin();

	iter++;

	dataList.insert( iter, 77 );

	for ( iter = dataList.begin(); iter != dataList.end(); iter++ ) {
		//cout << "dataList.begin() : " << *dataList.begin() << endl;
		cout << *iter << endl;
	}//iter ����ŭ �����ؼ� ���� �����͸� ����Ű�� ��


	// �ݺ��� ��ȿȭ
	// 

	/*vector<int> vectorInt;

	vector<int>::iterator vectorIter;

	vectorInt.reserve( 8 );

	vectorInt.emplace_back( 10 );
	vectorInt.emplace_back( 20 );
	vectorInt.emplace_back( 30 );
	vectorInt.emplace_back( 40 );

	vectorIter = vectorInt.begin();

	vectorInt.erase( vectorIter + 2 );

	for ( int i = 0; i < vectorInt.size(); i++ ) {
		cout << vectorInt[i] <<endl;
	}*/


#pragma endregion




	return 0;
}