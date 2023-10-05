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

#pragma region 컨테이너 어댑터 : Priority Queue
	//4 5 1 2이가 들어온다면 자동정렬이 되어 <- [5] [4] [2] [1] <- 순으로 들어감 (힙정렬)
	//vector에 저장됨
	//5를 없애면 1 자리에 0이 들어옴. 그후 왼쪽 오른쪽 자식을 비교해 큰 수를 0과 swap 함
	// (1번노드 = 0, 2번노드 = 4 3번노드 = 2 이라면 1번노드와 2번노드를 바꿈)
	//그리고 자식의 값이 부모노드보다 크다면 계속 스왑하면 됨

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