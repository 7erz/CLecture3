#include<iostream>
#include"Mechanic.h"
#include"Vulture.h"
using namespace std;

#pragma region 다형성
//여러 개의 서로 다른 객체가 동일한 기능을
//서로 다른 방법으로 처리할 수 있는 작업

//다형성은 컴파일 시점에 함수와 속성이 결정되는
//정적 바인딩을 하지 않고, 실행 시간에 함수와
//속성을 결정될 수 있는 동적 바인딩을 가능하게 함

#pragma endregion


int main() {
#pragma region 오버라이드
	/*Mechanic mechanic;
	mechanic.Move();

	Vulture vulture;
	vulture.Move();*/
#pragma endregion

#pragma region 가상 함수
	//상속하는 클래스 내에서 같은 형태의 함수로
	//재정의 될 수 있는 함수

	Mechanic* mechanic1 = new Vulture;		//mechanic1 = 8바이트 주소값 생김
	//Mechanic = 어디까지만 참조할 건지에 대해서만 (메카닉까지만 읽음)
	//float* a = new double 이 float가 double을 다 읽어올수 없는것 처럼
	cout << "메카닉 크기 : " << sizeof(Mechanic) << endl;		//4byte 자료형 2개 + 8byte 포인터 1개 
	cout << "벌쳐 크기 : " << sizeof(Vulture) << endl;			//16byte
	mechanic1->Move();		//벌쳐는 뜨지 않음
	mechanic1->Attack();

	//가상 함수 실행 시간에 상위 클래스에 대한 참조로
	//하위 클래스에 재정의된 함수를 호출할 수 있으며,
	//접근 지정자는 공개로 설정해야 함

	//Vulture
	//Mechanic
	//Vfptr		8byte

	//가상함수 테이블									[부모 클래스의 가상 함수]
	//함수의 이름	->		함수의 주소					00XX00FF
	//vpptr이 위를 참조		(자식 클래스 가리킴)		[자식 클래스의 가상 함수]
	//													00BB05FF

	//버츄얼 만들면 vfptr에 자식의 이름인 Vulture가 들어가고 Vulture의 주소로 가서 호출을 받는다
	//호출은 mechanic->Attack()
#pragma endregion




	return 0;
}