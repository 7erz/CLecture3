#include "Camera.h"

Camera::Camera()
{
	view = 60;
	cout << "Camera ����" << endl;
}

Camera::~Camera()
{
	cout << "Camera ����" << endl;
}

void Camera::Inform() const
{
	cout << "view�� �� : " << view << endl;
	//view = 100	ERROR!	const�� �б� �������� �Ǿ���
}
