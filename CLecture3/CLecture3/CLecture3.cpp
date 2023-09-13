#include<iostream>
#include"Camera.h"
using namespace std;

#pragma region 상속
//상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 설정해주는 기능
//class item		상위 클래스
//protected: int price ;

//class Potion : public Item		하위 클래스

//Posion Posion ;

class Vehicle {
protected:
	float speed;			//지역 변수 (멤버 변수)
	static int kCount;		//정적 변수(static)를 이용해야함 (그러지 않으면 증가하지 않고 메모리에서 삭제됨)
	//(한번만 초기화된 후 계속해서 사용 가능 하다)
	//프로그램 실행시 먼저 실행됨 (클래스는 안됨) 그래서 데이터 영역에서 kCount가 관리 됨.
	//v1 v2 v3 가 만들어지면 각 4byte인 speed와 메모리 변수 kcount 1개가 있음

public:
	Vehicle() {
		cout << "Vehicle Object" << endl;
	}

	void Movement() {
		cout << "이동" << endl;
	}

	static int SetCount() {		
		//speed = 100	ERROR!		메모리가 불러오기전에 일반 변수는 알수 없음
		return kCount;		//정적변수만 들어올 수 있음
	}

	~Vehicle() {
		cout << "Vehicle Object Disabled" << endl;
	}
};

int Vehicle::kCount = 0;

class Car : public Vehicle {
public:
	Car() {
		carID = 1;
		speed = 100;
		cout << "Car Object" << endl;
	}

	~Car() {
		cout << "Car Object Disabled" << endl;
		cout << "killCount : " << ++kCount << endl;
	}
private:
	int carID;


};

//클래스의 상속 관계에서 상위 클래스는 하위 클래스의 속성을 사용할 수 없으며,
//하위 클래스의 메모리를 포함한 상태로 메모리으이 크기가 결정됨.


#pragma endregion

//선언					정의
//class.h				class.cpp
//void F();	선언만 ->	여기서 정의를 함

int main() {
#pragma region 상속
	Vehicle vehicle;		//상위 클래스가 생긴

	Car car1;				// 그 후 하위 클래스 생김. (이게 없다면 상위클래스만 생성됨)
	//Car car2;
	//Car car3;

	//cout << "car의 크기 : " << sizeof(Car) << endl;
	//cout << "vehicle의 크기 : " << sizeof(vehicle) << endl;

	//car1.Movement();

	cout << Vehicle::SetCount() << endl;
#pragma endregion

#pragma region 클래스 분할, 구현
	//Camera camera;
	//
	//camera.Inform();	//const
#pragma endregion



	return 0;
}