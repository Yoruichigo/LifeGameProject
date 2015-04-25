/*
	Cpp
	CamelaCrass	

	Create 4/25
*/


#include "Camera.h"



using namespace Lib;


void Camera::Initialize()
{
	RECT ScreenSize;
	DxLib::GetWindowCRect(&ScreenSize);

	x = 0;
	y = 0;
	width = ScreenSize.right;
	height = ScreenSize.bottom;
}




void Camera::SetPosition(int _x,int _y)
{
	x = _x; y = _y;
}


void Camera::AddPosition(int _x,int _y)
{
	x = x +_x; y = y + _y;
}