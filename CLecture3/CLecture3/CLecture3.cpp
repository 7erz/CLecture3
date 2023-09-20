#include<iostream>
using namespace std;

#pragma region RAII 패턴
//자원의 획득은 초기화이다
// 
//자원의 안전한 사용을 위해 객체가 쓰이는 범위를
//벗어나게 되면 자원을 해재해주는 기법

class File {
public:
	File() {
		cout << "Create File" << endl;
	}
	~File() {
		cout << "delete File" << endl;
	}

};
#pragma endregion

class Player {
private:
	int health;
#pragma region weak 포인터
	//자신이 참조학도 있는 원시 포인터의 강한 참조 카운트가 0이 되면
	//expried 라는 상태가 되는데, 이는 원시 포인터의 참조 카운트가 0이 되어
	//메모리가 해제되었으므로, 이 원시 포인터를 소유한 weak 포인터를 유효하지 않다고
	//판단하여 해제하는 포인터

	//강한 참조, 원시포인터 = shared_ptr
#pragma endregion
	weak_ptr<Player> partner;		//포인터엔 함부러 들어가면 안되기에 private

	//shared_ptr은 서로를 참조하기에 참조카운터가 줄어들지 않아 메모리가 삭제되지 않음
	//서로 참조를 하기에 1씩 올라가 있는데 weak_ptr을 써서 참조 메모리가 연결되있다가
	//끝날때 참조 포인터가 0이되면 weak 포인터의 수치도 0이 되어 삭제됨

public:
	Player() {
		cout << "Player 생성" << endl;
	}
	void SetPartner( weak_ptr<Player> partner ) {
		this->partner = partner;
	}
	~Player() {
		cout << "Player 제거" << endl;
	}


};




int main() {

#pragma region unique 포인터
	//단 하나의 객체만 가리킬 수 있는 스마트 포인터

	//int* mPtr = nullptr;

//{
// int* ptr1 = new int			//메모리 해제를 하지 않아 누수가 생김
//mPtr = ptr1;
//}




	//unique_ptr<File> uptr1( new File );

	//cout << "uptr1의 주소 : " << uptr1 << endl;
	//cout << "------------------------------" << endl;

	//unique_ptr<File> uptr2 = make_unique<File>();

	//cout << "uptr2의 값 : " << uptr2 << endl;
	//cout << "------------------------------" << endl;

	////하나의 unique 포인터는 하나의 객체만 가질 수 있다.
	////하지만, 객체에 대한 소유권을 이전하는 것은 가능
	//unique_ptr<File> uptr3 = move(uptr2);		//L밸류를 R밸류로 전환

	////*uptr3 = 999;		//자동으로 포인터를 만들어줌
	//
	////*uptr2 = 450;		//소유권을 이전했기 때문에 예외발생됨 (null을 가리키는 곳에 수가 저장되어 터짐)
	//cout << "uptr2의 값 : " << uptr2 << endl;		//null (000000...)
	//cout << "uptr3의 값 : " << uptr3 << endl;

	
#pragma endregion

#pragma region shared 포인터
	//하나의 객체에 여러 개의 포인터가 공유할 수 있으며
	//공유 할 때마다 참조 카운트 이용해서 메모리 관리하는 스마트 포인터
	// 
	//연결하면 참조 카운터가 증가하고 삭제되면 감소함

	//shared_ptr<File> sptr1( new File() );

	//cout << sptr1.use_count() << endl;

	//shared_ptr<File> sptr2 = sptr1;

	//cout << sptr1.use_count() << endl; 

	shared_ptr<Player> player1 = make_shared<Player>();
	shared_ptr<Player> player2 = make_shared<Player>();
	
	player1->SetPartner( player2 );
	player2->SetPartner( player1 );

	//1. HEAP 안에 A Player, B Player
	//	Stack
	//shared_ptr<Player> player1 = make_shared<Player>();
	//스택에 player1이 생김 (8byte)

	//2.shared_ptr<Player> player2 = make_shared<Player>();
	//스택에 player2가 생김 (8byte)

	//3. 서로의 참조 카운트는 1,1
	//	player1->SetPartner( player2 );
	//player2->SetPartner( player1 );
	//는 A 안의 player * [이 안의 값] ->  B player를 가리킴 
	//B 또한 A를 같은 방식으로 가리킴
	//그래서 참조 카운트는 2가 됨

	//4. 힙에서 살아있기에 스택에 있던 player1,2가 사라져도 참조카운터가 1로 감소하기에
	//메모리가 남아있게 됨(결과적으로 누수가 됨)


	//shared_ptr은 강한 참조로 들어감
	//참조카운터에 영향을 미치게 됨 (위의 예시에서 2 -> 1)

	//순환참조는 weak 카운트로 해야 함
	//참조카운트가 0이 되면 weak카운트가 몇이든 삭제가 됨
	//class Player 안의 포인터를 변경해야 함


	

#pragma endregion






	return 0;
}