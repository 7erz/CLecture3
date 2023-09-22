#include<iostream>
#include"Computer.h"
#include"Player.h"
#include"Bank.h"
using namespace std;

int main() {
#pragma region 다중 상속
	// 하나의 하위 클래스가 여러 개의 상위 클래스를 상속받는 것
	//Computer computer;
	//computer.Use();

#pragma endregion

#pragma region Friend
	//Friend 로 선언된 클래스의 private 및 protected 멤버에
	//접근할 수 있도록 설정해 주는 기능

	Player player;
	player.ShowMoney();

	

	Bank bank;
	bank.Withdrawal( player, 15000 );
	bank.ShowMoney();
	player.ShowMoney();
#pragma endregion

	return 0;
}