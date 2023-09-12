#include<iostream>
using namespace std;

#pragma region 복사 생성자
// 같은 객체를 복사하여 생성시킬 때 호출되는 생성자

class Item {
	//아무것도 없어도 생성자가 정의되어있음 (기본 생성자)
	//public Item () { }		//기본 생성자
private:
	int price;
	int* size;


public:
	Item() {			//기본 생성자
		price = 100;
		size = new int;
		*size = 999;
	}

	Item(const Item& item) {	//자기자신 객체 복사, &가 없으면 자기 자신을 계속 호출함
		//const를 넣어 데이터 변조를 방지함
		//price = item.price;
		//size = item.size;		//얕은 복사
		price = item.price;
		size = new int;			//깊은 복사
		*size = 450;
	}

	void Show() {
		cout << "price : " << price << endl;
		cout << "size : " << *size << endl;
	}

	void IncreasePrice(int num) {
		price += num;
	}

	~Item() {		//소멸자
		delete size;	
	}

};

#pragma endregion



int main() {
#pragma region 복사 생성자
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

	Item item1;
	Item item2(item1);

	item1.Show();
	item2.Show();
#pragma endregion

#pragma region 얕은 복사
	//객체를 복사할 때 주소 값을 복사하여 같은 메모리를 가리키는 복사
	//int* ptr1 = new int;
	//int* ptr2 = ptr1;

	//*ptr2 = 1000;

	//cout << "ptr1 : " << ptr1 << endl;
	//cout << "ptr2 : " << ptr2 << endl;

	//delete ptr1;
	//delete ptr2;		ERROR
	//얕은 복사는 객체가 메모리에서 해제될 때 생성자의 실행 순서와 반대로 소멸자가 실행되기 때문에 
	//복사한 객체가 먼저 해제되므로 원래 있던 객체가 해제될 때는 이미 해제된 메모리에 접근하게 됨
#pragma endregion

#pragma region 깊은 복사
	//객체를 복사할 때, 참조 값이 아닌 인스턴스 자체를 
	//새로 복사하여 서로 다른 메모리를 생성하는 복사


#pragma endregion






	return 0;
}