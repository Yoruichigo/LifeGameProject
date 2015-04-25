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
		Libraryの初期化関数と終了関数
		Dxlibの初期化後、終了前に読んでください
	*/
	extern void MyLibraryInitialize();
	extern void MyLibraryEnd();


	/*
		四角、左上右下を指定してBoxとGraphicの表示可能
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

		void CameraDraw()const;//カメラに直接画像を表示
		void CameraDrawReversal()const;//カメラに直接画像を逆表示
		void CameraDrawBox()const;//カメラに箱を表示

		void WorldDraw();//ワールド座標で描画
		void WorldDrawReversal();//ワールド座標で逆描画
		void WorldDrawBox();//ワールド座標で箱描画

		bool DeleteGraphic();
		static bool DeleteGraphic(std::string _Location);
	private:
		std::string GraphicFileLocation;
		static GraphicHandle GraphicMapLoad(std::string);
		static bool GraphicMapDelete(std::string);
		static std::map<std::string,int> GraphicMap;
	};

	//画面更新用
	extern void ScreenClear();
	extern void ScreenRender();









}










