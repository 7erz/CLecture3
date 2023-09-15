#include<iostream>
#include"Mechanic.h"
#include"Vulture.h"
#include"SiegeTank.h"
#include"Goliath.h"
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

	/*Mechanic* mechanic1 = new Vulture;*/		//mechanic1 = 8바이트 주소값 생김
	//Mechanic = 어디까지만 참조할 건지에 대해서만 (메카닉까지만 읽음)
	//float* a = new double 이 float가 double을 다 읽어올수 없는것 처럼
	//cout << "메카닉 크기 : " << sizeof(Mechanic) << endl;		//4byte 자료형 2개 + 8byte 포인터 1개 
	//cout << "벌쳐 크기 : " << sizeof(Vulture) << endl;			//16byte
	//mechanic1->Move();		//벌쳐는 뜨지 않음
	//mechanic1->Attack();

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


#pragma region 스타 팩토리 만들기
		//1.스타크래프트 팩토리 구현
	//int selNum = 0;
	//cin >> selNum
	//1번 선택시 벌쳐, 2번 시즈탱크, 3번 골리앗
	//예외처리 = 다시 숫자 입력

	//생성자 호출, attack 함수(공격이 달라야 함)
	//5번까지 입력 받을 수 있다.(예외처리 = 횟수 치지 않음. 그 이후는 종료)
	/*int selNum;
	Mechanic* mechanic = nullptr;
	int totcount = 0;



	while (totcount < 5) {
		cout << "생산할 유닛 선택 : ";
		cin >> selNum;
		switch (selNum) {
		case 1:
			mechanic = new Vulture;
			//totcount++;
			break;
		case 2:
			mechanic = new SiegeTank;
			//totcount++;
			break;
		case 3:
			mechanic = new Goliath;
			//totcount++;
			break;
		default:
			cout << "예외값!!" << endl;
			continue;		//다시 위로 올라감
			//나의 답
			//Mechanic* mechanic = nullptr;
			//cout << "예외값!!" << endl;
		}

		totcount++;
		mechanic->Attack();
		//나의 답
		if (selNum == 1) {
			mechanic = new Vulture;
			totcount++;
		}
		else if (selNum == 2) {
			mechanic = new SiegeTank;
			totcount++;
		}
		else if (selNum == 3) {
			mechanic = new Goliath;
			totcount++;
		}
		else {
			Mechanic* mechanic = new Mechanic;
			cout << "예외값!!" << endl;
		}
		if (selNum >= 1 && selNum <= 3) {
			mechanic->Attack();
		}


	}
	delete mechanic;
	cout << "프로그램 종료..." << endl; */

	//가상 함수의 경우 가상 함수 테이블을 사용하여
	//호출되는 함수를 실행 시간에 결정하며
	//정적으로 선언된 함수는 가상 함수로 선언할 수 없다.

#pragma endregion

#pragma region 가상 소멸자
	//객체가 소멸될 때 현재 참조하고 있는 객체와 상관없이
	//모두 호출되는 소멸자

	Mechanic* unit1 = new Vulture;		//unit1 _vfptr [1] vector deleting destructor
	//Vulture::Attack			  예) 0x00007ff6bfb811c2	
	//Vulture::Destructor 의 주소 예) 0x00007ff6bfb81555
	Mechanic* unit2 = new SiegeTank;
	Mechanic* unit3 = new Goliath;


	delete unit1;	//부모 밖에 접근하지 못함
	delete unit2;	//소멸자가 실행되면 메카닉 삭제만 뜸 (부모만 소멸했기 때문)
	delete unit3;	//부모에게 virtual만 붙여도 정상적으로 실행이 됨

	//가상 소멸자는 상속된 객체가 해제될 때 하위 클래스의 소멸자가 
	//먼저 실행 되고 상위 클래스의 소멸자가 실행되어야 하기 때문에
	//실행 시간에 메모리에 할당된 객체를 확인하고 차례대로 소멸시켜야 함

#pragma endregion



	return 0;
}