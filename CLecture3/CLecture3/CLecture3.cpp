#include<iostream>
using namespace std;

#pragma region final
//하위클래스에서 더 이상 재정의할 수 없도록 선언하는 기능
//계층을 많이 쓸때 사용하게 됨

class Hero {
	virtual void BasicSkill() {};
	virtual void MagicSkill() {};

};

class Crusader : public Hero {
	void BasicSkill() {};
	void MagicSkill() final {};
};

class Fighter : public Crusader {
	void BasicSkill() {};
	//void MagicSkill() {};
};

#pragma endregion



int main() {


	return 0;
}