#pragma once		//������� �ߺ����� ��ó����
#include<iostream>
using namespace std;

class Camera
{
private:
	float view;
public:
	Camera();		//������
	~Camera();
	//const �Լ�
	//�� �Լ� ���ο��� ���� ���� ���� ���ϴ� �б��������� ����
	void Inform() const;
};

