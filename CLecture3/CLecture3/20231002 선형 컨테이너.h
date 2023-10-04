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


#pragma region 자료구조 서론
//자료구조
//데이터들을 효율적으로 처리하기 위해 사용하는 것
//KEY VALUE 값 (유니티는 Dictionary 같이)

//선형 컨테이너
// 
// std::vector
// 동적 배열 (알아서 size의 크기가 증가)
// 런타임 중에 크기를 변경 가능 (메모리를 새로 만드는 식)
// 이게 유니티에서는 List<int>
// Managed Heap : 메모리 미리 할당했다가 늘어나면 2배씩 늘려 나감
// std::list
// std::deque
//
#pragma endregion

#pragma region 선형 컨테이너
//데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 일반적인 컨테이너
#pragma endregion

int main() {

#pragma region Vector 컨테이너
	//vector<int>		vector;//클래스 명시적으로 정의해야함 (int...) 스택에 vector 생성
	////동적 배열 int, char, float, class
	//// 템플릿 <T> 컴파일 시점에 int
	//vector.push_back( 10 );
	//vector.push_back( 20 );
	//vector.push_back( 30 );
	////3개 생성 후 힙에 4byte 3개씩 12byte 생성

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;


	//for ( int i = 0; i < vector.size(); i++ ) {
	//	cout << vector[i] << endl;
	//}

	//vector.push_back( 40 );
	//vector.push_back( 50 );		//다이렉트로 바로 들어오기 때문에 O(1)
	//// 위의 12바이트 메모리는 2배가 늘어나고
	////순서대로 복사되서 들어가고 40은 네번째 50은 다섯번째 공간에 들어감
	////[10][20][30][40][50][]

	//// O(N)은 데이터를 처리할때 n번만큼 걸린다.

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

	//for ( int i = 0; i < vector.size(); i++ ) {
	//	cout << vector[i] << endl;
	//}

	//vector.pop_back();
	////pop_back() : 제일 뒤에 있는 데이터 삭제
	//// [10][20][30][40] : size
	////[10][20][30][40][  ][  ] : capacity
	//vector.pop_back();
	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

	////push_back() : 뒤 쪽에 데이터 저장하는 함수
	//

	////[10][20][30][40][50][] 에서 20을 지우게 된다면
	////[10][30][40][50][][]		이게 20자리에 30을 복사, 30자리에 40을 복사... 하는 식 O(N)

	////LinkedList
	////서로 양뱡향으로 연결되어있음
	////1 <-> 2 <-> 3 <-> 4
	////1 <-> 3 <-> 4
	////2는 delete
#pragma endregion

#pragma region 리듬 게임
	//라이프는 3~5개
	//화살표를 입력받아 같으면 넘어가고 틀리면 라이프가 까임
	//뒤에서 부터 popback을해서 지워나감
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
			arrow.push_back( "↑" );
			break;
		case 1:
			arrow.push_back( "←" );
			break;
		case 2:
			arrow.push_back( "→");
			break;
		case 3:
			arrow.push_back( "↓" );
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
		case UP: if ( arrow[arrow.size() - 1] == "↑" ) {
			arrow.pop_back();
		}
			   break;
		case LEFT: if ( arrow[arrow.size() - 1] == "←" ) {
			arrow.pop_back();
		}
				 break;
		case RIGHT: if ( arrow[arrow.size() - 1] == "→" ) {
			arrow.pop_back();
		}
				  break;
		case DOWN: if ( arrow[arrow.size() - 1] == "↓" ) {
			arrow.pop_back();
		}
				 break;
		}
		system( "cls" );
	}*/

#pragma endregion

#pragma region Deque 컨테이너
	//Double  Ended Queue의 약자
	//<-[ ][ ][ ][ ][ ]->
	//->			   <-

	//Deque 선언
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