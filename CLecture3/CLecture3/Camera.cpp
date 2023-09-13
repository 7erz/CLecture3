#include "Camera.h"

Camera::Camera()
{
	view = 60;
	cout << "Camera 생성" << endl;
}

Camera::~Camera()
{
	cout << "Camera 삭제" << endl;
}

void Camera::Inform() const
{
	cout << "view의 값 : " << view << endl;
	//view = 100	ERROR!	const라서 읽기 전용으로 되었음
}
