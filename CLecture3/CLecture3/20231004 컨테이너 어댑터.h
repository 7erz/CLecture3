#pragma once
#include<iostream>
#include<string>
#include<time.h>
#include<vector>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>
#include<stack>
#include<queue>

using namespace std;

#pragma region �����̳� �����
//���� �����̳��� �������̽��� �����Ͽ�
//���� ����� ���ѵǰų� ������ �����̳�

//STACK,	QUEUE,		PRIORITY QUEUE
//Stack : ���� ��Ű�� ���� - ��� �ε��� ������ ����(��,�ڿ����� ���� �� �ְ� ����) - LIFO (last in first out)
//QUEUE : FIFO (first in first out)
//P-QUEUE : 
#pragma endregion


int main() {

#pragma region �����̳� ����� : Stack
	/*stack<int> stack;

	stack.push( 10 );
	stack.push( 20 );
	stack.push( 30 );
	stack.push( 40 );
	stack.push( 50 );

	while ( stack.empty() == false ) {
		cout << "stack�� Top : " << stack.top() << endl;
		stack.pop();
	}*/
#pragma endregion

#pragma region �����̳� ����� : QUEUE
	//queue<int> queue;
	//queue.push( 10 );
	//queue.push( 20 );
	//queue.push( 30 );
	//queue.push( 40 );

	//while ( queue.size() ) {
	//	cout << queue.front() << endl;
	//	queue.pop();
	//}

#pragma endregion

#pragma region �����̳� ����� : Priority Queue
	//4 5 1 2�̰� ���´ٸ� �ڵ������� �Ǿ� <- [5] [4] [2] [1] <- ������ �� (������)
	//vector�� �����
	//5�� ���ָ� 1 �ڸ��� 0�� ����. ���� ���� ������ �ڽ��� ���� ū ���� 0�� swap ��
	// (1����� = 0, 2����� = 4 3����� = 2 �̶�� 1������ 2����带 �ٲ�)
	//�׸��� �ڽ��� ���� �θ��庸�� ũ�ٸ� ��� �����ϸ� ��

	//priority_queue<int> pQueue;
	//pQueue.push( 5 );
	//pQueue.push( 10 );
	//pQueue.push( 3 );
	//pQueue.push( 7 );
	//pQueue.push( 1 );

	//while ( pQueue.size() ) {
	//	cout << pQueue.top() << endl;
	//	pQueue.pop();
	//}
#pragma endregion


	return 0;
}