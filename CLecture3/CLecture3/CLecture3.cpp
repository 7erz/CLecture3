#include <iostream>

void Damage(int hp){		//4byte 복사
	hp -= 100;			//이 지역 변수의 hp 값만 -100
	std::cout << "hp : " << hp << std::endl;
}

void PDamage(int* hp) {		
	*hp -= 100;			//역참조 하고 value 값  -100 하기
	std::cout << "hp : " << *hp << std::endl;
}

int main()
{
#pragma region 스트림
	//시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름.
	//스트립은 운영체제에 의해 생성되며, 스트림 자체에 버퍼버라는 임시 메모리 공간이 존재함

	//char alphabet = 'A';
	//int data = 100;
	//float x = 3.75;

	//스트림의 경우 입력된 데이터는 출력 장치로 전달하며
	//"<<" 연산자를 사용하여 자신이 참조한 값을 반환

	/*std::cout << "data: " << data << std::endl;
	std::cout << "alphabet : " << alphabet << std::endl;
	std::cout << "x : " << data;*/


	//스트림으로 입력받을 때 ">>" 연산자를 사용하여 버퍼에 저장한 다음 NULL 문자까지만 버퍼 안의 내용을 출력

	/*std::cin >> data;
	std::cout << data;*/
#pragma endregion

#pragma region 동적 할당과 해제

	/*int* ptr = new int;

	*ptr = 255;

	std::cout << "ptr이 가리키는 값 : " << *ptr << std::endl;

	delete ptr;

	ptr = nullptr;

	ptr = new int[5];

	for (int i = 0; i < 5; i++) {
		ptr[i] = i;
		std::cout << ptr[i] << std::endl;
	}*/

	//스 택				new
	//					4byte
	// ptr				00FF00A0~3	
	// 00FF00A0
	//8byte 
	//
#pragma endregion

#pragma region 참조자
	//하나의 메모리공간에 이름을 추가해서 사용하는 것
	//value / ref
	//    200

	/*int value = 300;
	int& ref = value;

	Damage(ref);
	Damage(value);
	PDamage(&ref);
	Damage(value);
	Damage(ref);
	PDamage(&value);
	Damage(value);
	Damage(ref);


	std::cout << "value의 값 : " << value << std::endl;		
	std::cout << "ref의 값 : " << ref << std::endl;			

	ref = 999;

	std::cout << "value의 값 : " << value << std::endl;		
	std::cout << "ref의 값 : " << ref << std::endl;			
	
	std::cout << "value의 값 : " << &value << std::endl;	
	std::cout << "ref의 값 : " << &ref << std::endl;*/		


#pragma endregion

#pragma region 범위 기반 for문
	int dataList[5] = { 1,2,3,4,5 };
	
	for (const int &element : dataList) {		//const 
		std::cout << element << std::endl;
	}
#pragma endregion



	return 0;
}