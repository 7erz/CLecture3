#include<iostream>
using namespace std;

class Animal {
private:
	char blood;		//1byte

	int age;			//4byte
	float height;		//4byte
	

public:
	Animal(int m_age,float m_height) : age(m_age),height(m_height){
		cout << "age : " << age << endl;
		cout << "height : " << height << endl;
	}

#pragma region this 포인터
	//객체 자기 자신ㅇㄹ 가리키는 포인터
	//			'A'				5			10.25f
	Animal( char blood, int age, float height ) {
		//bloodType = bloodType;		//매개변수, 멤버변수 다 같은 이름이라 애매모호 함

		this->blood = blood;
		this->age = age;
		this->height = height;

		cout << "객체의 주소 : " << this << endl;
	}


#pragma endregion


};

//R value : 임시로 사용되고 더 이상 참조되거나 사용되지 않는 메모리
// 리터럴 상수

//L value : int value = x; 같은것
//10 = value; 는 될수가 없다.


//L value = R value;

int* Value() {
	int data = 10;
	return &data;
}	//포인터를 반환하는 함수 (data의 주소)



int main() {

	//Animal animal('A', 5, 10.25f);
	int* ptr = Value();

	cout << *ptr << endl;

	*ptr = 300;

	cout << *ptr << endl;


	return 0;
}