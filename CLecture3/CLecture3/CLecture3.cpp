#include<iostream>
using namespace std;

#pragma region 접기
int data = 100;

namespace A {
	void Attack() {
		cout << "A 개발자 Attack()" << endl;;
	}
}

namespace B {
	void Attack() {
		cout << "B 개발자 Attack()" << endl;;
	}
}

void Damage(int hp = 100) {
	hp -= 25;
	cout << "hp 값 : " << hp << endl;
}
//기본 매개변수는 오른쪽에서부터 정의 해야 함 (z 먼저)
void Move(int x, int y, int z = 10) {
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
	cout << "z : " << z << endl;

}

#pragma endregion



int main() {
#pragma region 범위 지정 연산자
	//여러 범위에서 사용되는 식별자를 구분하는데 사용되는 연산자

	//범위 지정 연산자는 전역 변수와 같은 이름의 지역변수가
	//선언되었을 때 가장 가까운 범위에선언된 변수의 이름을 
	//사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않습니다.

	//int data = 25;

	//int data = 100;
	//std::cout << "지역 변수 data의 값 : " << data << std::endl;
	//std::cout << "전역 변수 data의 값 : " << ::data << std::endl;


	//분할 구현
	//.h		.cpp
	// 선언		구현
	//
	// 똑같은 이름 링킹 오류
	//
	// include 는 복사 붙여넣기라고 생각하며 ㄴ됨
	//


#pragma endregion

#pragma region 이름 공간 (namespace)
	//속성을 구분할 수 있도록 유효 범위를 설정하는 영역
	// A 의 Attack() / B 의 Attack()
	// namespace 와 A::Attack()으로 구분 (using)
	//std 또한 가져와서 해제 할 수 있음

	//c#의 경우 Dispose
	//파일 입출력 할때 using(파일 불러오기){}
	//리소스 등 이미테이트 디스트로이 사용 (메모리 바로 해제)

	//A::Attack();
	//B::Attack();

#pragma endregion

#pragma region 기본 매개변수
	//함수의 매개 변수에 값이 전달되지 않았을 때
	//기본 값으로 설정되는 매개 변수

	//int hp = 100;

	//Damage();
	//Move(5, 10);
	////기본 매개변수가 있는 위치에 다시 새로운 인수를 넣어줄 수 있다.
	//Move(6, 12, 18);

#pragma endregion

#pragma region 최소공배수
	//38 과 42의 최소공배수 같이 나눠지는 걸로 + 나머지 숫자까지 다 곱함
	int x;
	int y;
	int top;
	int gop = 1;

	cout << "x 값 입력 : ";
	cin >> x;

	cout << "y 값 입력 : ";
	cin >> y;


	if (x > y) {
		top = x;
	}
	else if (x < y){
		top = y;
	}


	for (int i = 2; i < top; i++) {
		if (x % i == 0 && y % i == 0) {
			cout << i <<"로 나눠졌음." << endl;
			x /= i;
			y /= i;
			gop *= i;
			i--;
		}
	}

	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "최소 공배수 : " << gop * x * y << endl;



#pragma endregion


	return 0;
}