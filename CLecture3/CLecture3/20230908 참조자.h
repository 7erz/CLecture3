#pragma once
#include <iostream>

void Damage(int hp) {		//4byte ����
	hp -= 100;			//�� ���� ������ hp ���� -100
	std::cout << "hp : " << hp << std::endl;
}

void PDamage(int* hp) {
	*hp -= 100;			//������ �ϰ� value ��  -100 �ϱ�
	std::cout << "hp : " << *hp << std::endl;
}

int main()
{
#pragma region ��Ʈ��
	//�ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧.
	//��Ʈ���� �ü���� ���� �����Ǹ�, ��Ʈ�� ��ü�� ���۹���� �ӽ� �޸� ������ ������

	//char alphabet = 'A';
	//int data = 100;
	//float x = 3.75;

	//��Ʈ���� ��� �Էµ� �����ʹ� ��� ��ġ�� �����ϸ�
	//"<<" �����ڸ� ����Ͽ� �ڽ��� ������ ���� ��ȯ

	/*std::cout << "data: " << data << std::endl;
	std::cout << "alphabet : " << alphabet << std::endl;
	std::cout << "x : " << data;*/


	//��Ʈ������ �Է¹��� �� ">>" �����ڸ� ����Ͽ� ���ۿ� ������ ���� NULL ���ڱ����� ���� ���� ������ ���

	/*std::cin >> data;
	std::cout << data;*/
#pragma endregion

#pragma region ���� �Ҵ�� ����

	/*int* ptr = new int;

	*ptr = 255;

	std::cout << "ptr�� ����Ű�� �� : " << *ptr << std::endl;

	delete ptr;

	ptr = nullptr;

	ptr = new int[5];

	for (int i = 0; i < 5; i++) {
		ptr[i] = i;
		std::cout << ptr[i] << std::endl;
	}*/

	//�� ��				new
	//					4byte
	// ptr				00FF00A0~3	
	// 00FF00A0
	//8byte 
	//
#pragma endregion

#pragma region ������
	//�ϳ��� �޸𸮰����� �̸��� �߰��ؼ� ����ϴ� ��
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


	std::cout << "value�� �� : " << value << std::endl;
	std::cout << "ref�� �� : " << ref << std::endl;

	ref = 999;

	std::cout << "value�� �� : " << value << std::endl;
	std::cout << "ref�� �� : " << ref << std::endl;

	std::cout << "value�� �� : " << &value << std::endl;
	std::cout << "ref�� �� : " << &ref << std::endl;*/


#pragma endregion

#pragma region ���� ��� for��
	int dataList[5] = { 1,2,3,4,5 };

	for (const int& element : dataList) {		//const 
		std::cout << element << std::endl;
	}
#pragma endregion



	return 0;
}