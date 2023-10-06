#include<iostream>
#include<map>
#include<set>
using namespace std;

int main() {
#pragma region map
	map<string, int>mapData;

	mapData.insert( make_pair( "Sword", 5000 ) );
	mapData.insert( make_pair( "Armor", 2300 ) );

	map<string, int>::iterator mapIter;
	for ( mapIter = mapData.begin(); mapIter != mapData.end(); mapIter++ ) {
		cout << "KEY : " << mapIter->first << endl;
		cout << "KEY : " << mapIter->second << endl;
	}


	if ( mapData.find( "Sword" ) != mapData.end() ) {
		cout << "Key Found!" << endl;
	}
	else {
		cout << "not Key Found" << endl;
	}
#pragma endregion


#pragma region set
	set<int> setData;

	//중복된 값이 들어갔을때 중복된 값을 제거하고 다시 저장함
	setData.insert( 10 );
	setData.insert( 20 );
	setData.insert( 30 );
	setData.insert( 40 );

	set<int>::iterator setIter;
	setIter = setData.begin();

	setData.erase( setIter );
	cout << *setIter << endl;

#pragma endregion
	//STL 자료구조 학습하기


	return 0;
}