#pragma once
#include<iostream>
using namespace std;

template<typename T>
class LinkedList
{
private:
	T data;

public:
	LinkedList() = default;		
	LinkedList( int x ) {

	}

	void Push( T data ) {
		this->data = data;
		cout << "push 된 data 값 : " << data << endl;
	}

};

//template <typename T>
//inline void LinkedList<T>::Push( T data ) {
//
//}

