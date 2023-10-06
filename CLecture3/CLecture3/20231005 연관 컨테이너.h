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
#pragma region 문자열 (string)

	//const char * name;		데이터 영역에 저장, 스택에 이미 포인터가 있음 
	//name 포인터가 rodata 메모리 영역에 시작주소 가리키는 것 

	//string content		//스택에 있음
	//힙이라는 영역에 할당 (무작정 올리지는 않음) 8~16바이트는 스택에 올리고 그 이상에는 힙에 올림
	//새로 생성되면 기존에 있던건 삭제되고 새로운 연결을 찾음

	//string content = "Content";
	//cout << content << endl;
	//cout << content.size() << endl;		//마지막 널 문자가 없음

	//content = "League";
	//cout << content << endl;
	//cout << content.size() << endl;		//마지막 널 문자가 없음

	//cout << content.find( "ag" ) << endl;


	//cout << content.max_size() << endl;
#pragma endregion



#pragma region 연관 컨테이너
	//Key와 Value가 하나의 구성으로 이루어진 컨테이너 

	//List는 값 수정이 쉽다. O(n) 단일 연결 리스트

	//예)

	//struct Node {
	//	int data;
	//	Node* next;	//단일
	//	Node* prev;	//양방향

	//};

	list<int> dataList;
	dataList.push_back( 10 );
	dataList.push_front( 50 );
	dataList.push_front( 25 );
	dataList.push_back( 33 );

	//이터레이터 반복자, 포인터
	//dataList.begin() : 첫 번째 주소 반환
	//dataList.end() : 마지막 그 다음 주소를 반환

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
	}//iter 값만큼 증가해서 다음 포인터를 가리키게 됨


	// 반복자 무효화
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