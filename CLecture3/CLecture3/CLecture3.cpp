#include<iostream>
using namespace std;

#pragma region 클래스
//사용자 정의 데이터 유형으로 속성과 함수가 포함되어 있으며, 
//클래스를 통해 객체를 생성하여 접근하고 사용할 수 있는 집합체

//struct 대신 class를 사용
//변수 속성 정의 가능, 멤버함수 정의 가능( void Attack() 같은 것 )
//간단하게 말해 속성과 기능

class GameObject {		//클래스 내부,		메모리에 생산된게 아닌 단순한 설계도 느낌

	//접근 지정자
	/*클래스 내부의 포함되어 있는 속성에 접근 범위를 제한하는 지정자.
	
	접근 지정자 : public, protected, private

	public : 클래스 내부와 자기가 상속하고 있는 클래스
	그리고 클래스 외부에서 접근을 허용하는 지정자

	protected : 클래스 내부와 자기가 상속하고 있는 클래스까지만 접근을 허용하는 지정자

	private : 클래스 내부에서만 접근을 허용하는 지정자

	*/



public:
	float x;
	//기본 접근 지정자 (private)
	void SendMessage() {
		//cout << "x : " << x << ", y : " << y << ", z : " << z << endl;
		cout << "메시지" << endl;
		z = 300; //private 라서 내부에서만 접근가능
	}
protected:
	double y;		//8		24가 되어서 바이트 패딩이 됨
private:
	float z;		//4	+ 4(패딩값)
	//그래서 y대신 z에 double을 넣음 16이 됨
		

};


#pragma endregion

#pragma region 생성자와 소멸자
	//생성자
	//클래스의 인스턴스가 생성된느 시점에서 자동으로 호출되는 특수한 멤버

class Monster {
private:
	int health;

	//속성들이 생성되었을때 값을 초기화해줌
	//자동호출 됨
public:
	Monster() {
		cout << "Monster 생성" << endl;
	}
	//생성자의 경우 객체가 생성될 때 단 한번만 호출되며
	//생성자는 반환형이 존재하지 않기 때문에 
	//생성자가 호출되기 전에는 객체에 대한 메모리는 할당하지 않음

	//소멸자
	//객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수.
	~Monster() {
		cout << "Monster 소멸" << endl;
	}

	//소멸자는 객체가 메모리에서 해제될 때 단 한번만 호출되며,
	//소멸자에는 매개변수를 생성하여 사용할 수 없음


};

#pragma endregion



int main() {
#pragma region 클래스
	GameObject gameobject1;		//클래스 외부
	GameObject gameobject2;

	gameobject1.SendMessage();
	gameobject2.SendMessage();

	//gameObject. 하는 순간 시작주소에서 4씩 넘어감
	//배열또한 비슷하게 실행됨

	cout << sizeof(GameObject) << endl;

	//		 [메모리]
	//		코드 영역		<- 주소
	//		데이터 영역		(.rodata / init data)
	//		BSS 영역		
	//	------컴파일 시점에 메모리 올라감-----
	//		힙 영역			
	//		스택 영역		-> gameobject1, gameobject2
	//	SendMessage의 함수 주소에 gameobject1, gameobject2 클래스가 함수를 호출하고 있음
	// 매개변수가 없는 것 처럼 보이지만 this라는 함수(자동)가 있어서 자기의 주소로 함수를 호출함
	// 
	//

	//gameobject1.x = 100;
	//gameobject2.x = 120;

	//cout << gameobject1.x << endl;
	//cout << gameobject2.x << endl;

	//gameobject.x     -> 구조체에서는 그냥 되었지만 class에서는 public 이 없으면 안됨.
	//접근 지정자가 필요함
#pragma endregion

#pragma region 생성자와 소멸자
	Monster monster;

	Monster* ptr = new Monster;		//int * ptr = 주소 저장 포인터		class * ptr = 메모리 주소 저장 8byte
	//포인터 타입 명시적으로 맞춰줘야함 (new in) X

	cout << sizeof(ptr) << endl;
	delete ptr;
#pragma endregion


	



	return 0;
}