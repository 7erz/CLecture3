#include<iostream>
#include"Inventory.h"
#include"InputKey.h"
using namespace std;
#pragma region 제작 규칙
//인벤토리 칸은 15개. 가로 5줄, 세로 3줄
//칸 안에는 아이템 클래스를 넣을것
//int inven[15]; 0~14
//[][][][][] 5의 배수로 잘라서 [][][][][] 증가 시키기
//[][][][][]
//[][][][][]
//배열은 1.2차원 상관없음
//2차원 배열은 5 * 3 = 15 이런 식으로 만들것

//조건
//1.Inventory Class 제작
//2. 아이템 저장할 수 있는 데이터 컨테이너
//3. 데이터 컨테이너를 출력하는 기능을 제작하고,
//데이터(아이템)가 비어있으면 □ 표시 하기.
//4. Item Class 에는 name, Price 있어야 함
#pragma endregion

#pragma region 2일차
//AddItem(); 아이템 추가
//할시 좌상단에 채움, 특수문자 ■

//1.AddItem() 함수 제작
//int resultX = x / 2;
//int resultY = y * 2;
#pragma endregion




InputKey inputkey;


int main() {
	Inventory inven = {3,5};


	for ( int i = 0; i < 3; i++ ) {
		inven.AddItem();
	}

	

	while ( 1 ) {
		inven.MakeInven();
		inputkey.Move();
		system( "cls" );
	}
	
	

	

	return 0;
}