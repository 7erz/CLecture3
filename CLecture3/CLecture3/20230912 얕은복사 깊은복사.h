#include<iostream>
using namespace std;

#pragma region ���� ������
// ���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� ������

class Item {
	//�ƹ��͵� ��� �����ڰ� ���ǵǾ����� (�⺻ ������)
	//public Item () { }		//�⺻ ������
private:
	int price;
	int* size;


public:
	Item() {			//�⺻ ������
		price = 100;
		size = new int;
		*size = 999;
	}

	Item(const Item& item) {	//�ڱ��ڽ� ��ü ����, &�� ������ �ڱ� �ڽ��� ��� ȣ����
		//const�� �־� ������ ������ ������
		//price = item.price;
		//size = item.size;		//���� ����
		price = item.price;
		size = new int;			//���� ����
		*size = 450;
	}

	void Show() {
		cout << "price : " << price << endl;
		cout << "size : " << *size << endl;
	}

	void IncreasePrice(int num) {
		price += num;
	}

	~Item() {		//�Ҹ���
		delete size;
	}

};

#pragma endregion



int main() {
#pragma region ���� ������
	/*int a(10);
cout << a << endl;*/

/*	Item item1;
Item item2(item1);

item1.Show();
item2.Show();

item1.IncreasePrice(10);
item2.IncreasePrice(30);

item1.Show();
item2.Show();

Item item3(item1);
item3.Show();
item3.IncreasePrice(25);
item3.Show();*/

#pragma endregion

#pragma region ���� ����
//��ü�� ������ �� �ּ� ���� �����Ͽ� ���� �޸𸮸� ����Ű�� ����
//int* ptr1 = new int;
//int* ptr2 = ptr1;

//*ptr2 = 1000;

//cout << "ptr1 : " << ptr1 << endl;
//cout << "ptr2 : " << ptr2 << endl;

//delete ptr1;
//delete ptr2;		ERROR
//���� ����� ��ü�� �޸𸮿��� ������ �� �������� ���� ������ �ݴ�� �Ҹ��ڰ� ����Ǳ� ������ 
//������ ��ü�� ���� �����ǹǷ� ���� �ִ� ��ü�� ������ ���� �̹� ������ �޸𸮿� �����ϰ� ��
#pragma endregion

#pragma region ���� ����
	//��ü�� ������ ��, ���� ���� �ƴ� �ν��Ͻ� ��ü�� 
	//���� �����Ͽ� ���� �ٸ� �޸𸮸� �����ϴ� ����
	Item item1;
	Item item2(item1);

	item1.Show();
	item2.Show();

#pragma endregion






	return 0;
}#pragma once
