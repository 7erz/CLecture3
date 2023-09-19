#pragma once
#include<iostream>
#include"Marine.h"
#include"Firebat.h"
#include"Ghost.h"
#include"Medic.h"
using namespace std;

#pragma region 함수의 오버로딩
//같은 이름의 함수를 매개 변수의 자료형과 매개변수의
//수로 구분하여 여려 개를 선언할 수 있는 기능

void Calculator(int x, int y) {
	cout << "x + y = " << x + y << endl;

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
void Recovery(Unit* unit) {
	unit->setMaxHp();
}


int main() {

#pragma region 함수의 오버로딩
	//Calculator('A', 'B');		//아스키코드 값으로 들어감
	//Calculator(10, 20);
	//Calculator(7.5f, 6.25f);
#pragma endregion

#pragma region 순수 가상 함수
	//함수를 선언만 할 수 있으며, 해당 클래스에서 구현할 수 없고
	//상속받은 하위 클래스에서 반드시 재정의를 해야하는 멤버 함수

	/*Unit* unitPtr = new Marine;

	unitPtr->Skill();
	unitPtr->SetHp(100);
	cout << unitPtr->GetHp() << endl;*/
#pragma endregion

#pragma region 숙제
	int num;
	Unit* unit[3] = { nullptr };
	int unitCount = 0;
	int isBecon = 0;


	while (unitCount < 3) {
		cout << "뽑을 유닛 선택 : ";
		cin >> num;

		switch (num) {
		case 1:
			unit[unitCount] = new Marine();
			break;
		case 2:
			unit[unitCount] = new Firebat();
			break;
		case 3:
			unit[unitCount] = new Ghost();
			break;
		case 4:
			unit[unitCount] = new Medic();
			break;
		default:
			cout << "예외값" << endl;
			continue;
		}

		unit[unitCount]->GetDamage();
		cout << unit[unitCount]->GetName() << endl;

		cout << endl;
		cout << "당신의 유닛의 체력이 감소되었습니다. (0 : 사용, 1 : 사용안함)" << endl;
		cout << "체력을 회복하러 비콘을 이용하시겠습니까?  : ";
		cin >> isBecon;

		switch (isBecon) {
		case 0:
			//unit[unitCount]->setMaxHp();
			Recovery(unit[unitCount]);
			cout << "해당 유닛의 체력을 모두 회복했습니다." << endl << endl;
			break;
		case 1:
			cout << "비콘을 이용하지 않아 체력이 회복되지 않습니다." << endl << endl;
			break;
		default:
			cout << "예외값!!" << endl;
			continue;
		}

		unitCount++;

	}
	cout << endl << endl;

	for (int i = 0; i < unitCount; i++) {
		cout << i + 1 << "번째 유닛은 " << unit[i]->GetName() << "이며, " << endl;
		cout << unit[i]->GetName() << "의 최대 체력은 " << unit[i]->GetMaxHp() << "이며, " << endl;
		cout << "현재 체력은 " << unit[i]->GetHp() << "입니다." << endl << endl;
	}

	cout << "프로그램 종료..." << endl;

	//회복 비콘에 유닛이 들어가면 fullhp만들게 하기
	//생성되면 체력을 일부 깎음
	//void Recovery(Unit* unit){}		//매개 변수	//CLecture3.cpp에 만들기
	// 
	//Marine marine = new Marine;


#pragma endregion




	return 0;
}