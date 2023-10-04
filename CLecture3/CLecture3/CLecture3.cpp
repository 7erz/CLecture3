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

#pragma region 컨테이너 어댑터
//기존 컨테이너의 인터페이스를 제한하여
//만든 기능이 제한되거나 변형된 컨테이너

//STACK,	QUEUE,		PRIORITY QUEUE
//Stack : 랩핑 시키는 느낌 - 가운데 인덱스 접근을 제한(앞,뒤에서만 뽑을 수 있게 제한) - LIFO (last in first out)
//QUEUE : FIFO (first in first out)
//P-QUEUE : 
#pragma endregion


int main() {

#pragma region 컨테이너 어댑터 : Stack
	/*stack<int> stack;

	stack.push( 10 );
	stack.push( 20 );
	stack.push( 30 );
	stack.push( 40 );
	stack.push( 50 );

	while ( stack.empty() == false ) {
		cout << "stack의 Top : " << stack.top() << endl;
		stack.pop();
	}*/
#pragma endregion

#pragma region 컨테이너 어댑터 : QUEUE
	queue<int> queue;
	queue.push( 10 );
	queue.push( 20 );
	queue.push( 30 );
	queue.push( 40 );

	while ( queue.size() ) {
		cout << queue.front() << endl;
		queue.pop();
	}

#pragma endregion

	return 0;
}