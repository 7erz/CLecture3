#pragma once
#include"Player.h"

#pragma region 클래스 전방 선언
//불필요한 헤더 파일이 복잡하게 포함되는 것을 방지,
//결과적으로는 컴파일 속도 향상

class Player;		//클래스 전방 선언
#pragma endregion

class Bank //: public Player 알려주기만 하는것. 상속은 되지 않는다.
{
private:
	int bankMoney = 0;
public:
	void Withdrawal( Player& player, int money );

	void ShowMoney();
};

