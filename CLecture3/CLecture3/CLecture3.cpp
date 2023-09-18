#include<iostream>
#include"Marine.h"
using namespace std;

#pragma region 함수의 오버로딩
//같은 이름의 함수를 매개 변수의 자료형과 매개변수의
//수로 구분하여 여려 개를 선언할 수 있는 기능

void Calculator(int x, int y) {
	cout << "x + y = " <<  x + y << endl;

}

void Calculator(float x, float y) {
	cout << "x + y = " << x + y << endl;

}

void Calculator(char x, char y) {
	cout << "x + y = " << x + y << endl;

}

//함수의 오버로딩의 경우 함수의 매개 변수에 전달하는
//인수의 형태를 보고 호출하므로,  
//반환형으로 함수의 오버로딩은 생성할 수 없음.
//int Calculator(float x, float y) {
//
//}




#pragma endregion

#pragma region 순수 가상 함수
//virtual void Skill() = 0		//이런게 하나라도 있다면 추상클래스
//자식클래스에 강제시킴
//자식클래스는 정의를 하지 않으면 에러가 남
//자식 클래스에서 void Skill() { }를 만들어야 함

#pragma endregion


int main() {

#pragma region 함수의 오버로딩
	//Calculator('A', 'B');		//아스키코드 값으로 들어감
	//Calculator(10, 20);
	//Calculator(7.5f, 6.25f);
#pragma endregion

#pragma region 순수 가상 함수
	//함수를 선언만 할 수 있으며, 해당 클래스에서 구현할 수 없고
	//상속받은 하위 클래스에서 반드시 재정의를 해야하는 멤버 함수

	Unit* unitPtr = new Marine;

	unitPtr->Skill();
	unitPtr->SetHp(100);
	cout << unitPtr->GetHp() << endl;
#pragma endregion

#pragma region 숙제
	//회복 비콘에 유닛이 들어가면 fullhp만들게 하기
	//생성되면 체력을 일부 깎음
	//void Recovery(Unit* unit){}		//매개 변수	//CLecture3.cpp에 만들기
	// 
	//Marine marine = new Marine;





#pragma endregion




	return 0;
}