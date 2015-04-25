/*

	MyLibrary
	Lib.cpp
	4/16

*/


#pragma once

#include <Dxlib.h>
#include <string>
#include <map>

#include "Camera.h"

typedef int GraphicHandle;

namespace Lib
{
	/*
		Library�̏������֐��ƏI���֐�
		Dxlib�̏�������A�I���O�ɓǂ�ł�������
	*/
	extern void MyLibraryInitialize();
	extern void MyLibraryEnd();


	/*
		�l�p�A����E�����w�肵��Box��Graphic�̕\���\
	*/
	class Square{
	public:
		int x,y,height,width;
		int Color;
		GraphicHandle Graphic;
		
		Square(){};
		Square(const int _x,const int _y,const int _height,const int _width,const int _color = 0xffffff);
		void Set(const int _x,const int _y,const int _height,const int _width,const int _color = 0xffffff);
		void SetColor(int R,int G,int B);
		void SetGraphic(std::string _FileLocation);
		void SetGraphic(GraphicHandle _GraphicHandle);

		void CameraDraw()const;//�J�����ɒ��ډ摜��\��
		void CameraDrawReversal()const;//�J�����ɒ��ډ摜���t�\��
		void CameraDrawBox()const;//�J�����ɔ���\��

		void WorldDraw();//���[���h���W�ŕ`��
		void WorldDrawReversal();//���[���h���W�ŋt�`��
		void WorldDrawBox();//���[���h���W�Ŕ��`��

		bool DeleteGraphic();
		static bool DeleteGraphic(std::string _Location);
	private:
		std::string GraphicFileLocation;
		static GraphicHandle GraphicMapLoad(std::string);
		static bool GraphicMapDelete(std::string);
		static std::map<std::string,int> GraphicMap;
	};

	//��ʍX�V�p
	extern void ScreenClear();
	extern void ScreenRender();









}










