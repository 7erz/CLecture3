#pragma once
#include<iostream>
using namespace std;

class Item
{
private:
	const char* name;		//읽기전용공간 .rodata에 생성됨
	//H의 시작주소가 들어감
	//Hello~   -> [H][e][l][l][o][~]
	//char 배열로 되어있음
	//하나의 char문자로 되어있어서 포인터가 필요함
	//name[0] = 'A' 이런식으로 바꾸지 못하게 하가 위해 const 사용
	//저장되는 곳 자체가 읽기 전용인데 쓰기 를 하면 안됨

	//물론 name = "Dark";는 사용가능
	//새로운 .rodata에 새로운 시작 주소를 가져옴
	int price;
	bool check;

public:
	Item(int price = 0, const char* name = "");

	const char* GetItemName();
	int GetItemPrice();
	void SetCheck(bool check);
	bool GetCheck();

};

