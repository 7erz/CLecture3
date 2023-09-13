#pragma once		//헤더파일 중복방지 전처리기
#include<iostream>
using namespace std;

class Camera
{
private:
	float view;
public:
	Camera();		//생성자
	~Camera();
	//const 함수
	//이 함수 내부에서 값을 수정 하지 못하는 읽기전용으로 만듦
	void Inform() const;
};

