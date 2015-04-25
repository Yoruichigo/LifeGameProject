/*

	MyLibrary
	Lib.cpp
	4/16


*/


#include "Library.h"


using namespace Lib;


/*
	èâä˙âªÇ∆èIóπ
*/
void Lib::MyLibraryInitialize()
{

	Lib::Camera::Instance.Create();
	GETINSTANCE(Lib::Camera)->Initialize();

}

void Lib::MyLibraryEnd()
{

	Lib::Camera::Instance.Delete();

}




/*
	SquareÇ±Ç±Ç©ÇÁ
*/
std::map<std::string,int> Square::GraphicMap;

Square::Square(const int _x,const int _y,const int _height,const int _width,const int _color)
{
	Set(_x,_y,_height,_width,_color);
}

void Square::Set(const int _x,const int _y,const int _height,const int _width,const int _color)
{
	x = _x;
	y = _y;
	height = _height;
	width = _width;
	Color = _color;
}

void Square::SetColor(int R,int G,int B)
{
	Color = ( (R << 4) + (G << 2) + (B) );
}

void Square::SetGraphic(std::string _FileLocation)
{
	Graphic = GraphicMapLoad(_FileLocation);
}

void Square::SetGraphic(GraphicHandle _LoadData)
{
	Graphic = _LoadData;
}

// ***********
// Camera
void Square::CameraDraw()const
{
	DxLib::DrawExtendGraph(x,y,x + width, y + height,Graphic,true);
}

void Square::CameraDrawReversal()const
{
	DxLib::DrawExtendGraph(x + width,y,x,y + height,Graphic,true);
}

void Square::CameraDrawBox()const
{
	DxLib::DrawBox(x,y,x + width,y + height,Color,true);
}
// Camera end
// *********

// *********
// World
void Square::WorldDraw()
{

}

void Square::WorldDrawReversal()
{

}

void Square::WorldDrawBox()
{
	auto CameraPos = GETINSTANCE(Camera);
	DxLib::DrawBox(
		x + CameraPos->GetX(), y + CameraPos->GetY() ,
		x + width + CameraPos->GetX(), y + height + CameraPos->GetY(),Color ,true);
}
// World end
// ************

bool Square::DeleteGraphic()
{
	return GraphicMapDelete(GraphicFileLocation);
}

bool Square::DeleteGraphic(std::string _Location)
{
	return GraphicMapDelete(_Location);
}



GraphicHandle Square::GraphicMapLoad(std::string _Location)
{
	if(GraphicMap.find(_Location) == GraphicMap.end())
	{//GraphicÇ™ñ≥Ç¢èÍçá
		GraphicMap[_Location] = LoadGraph(_Location.c_str());
	}

	return GraphicMap[_Location];
}

bool Square::GraphicMapDelete(std::string _Location)
{
	if(GraphicMap.find(_Location) == GraphicMap.end())
	{
		return false;
	}else{
		int hr = DeleteGraph( GraphicMap[_Location] ) ;
		if(hr == -1)return false;
	}
	return true;
}


/*
	Square Ç±Ç±Ç‹Ç≈
	Screen Ç±Ç±Ç©ÇÁ
*/



void Lib::ScreenClear()
{
	ClearDrawScreen();
	SetDrawScreen( DX_SCREEN_BACK ) ;
}

void Lib::ScreenRender()
{
	ScreenFlip();
}


/*
	Screen Ç±Ç±Ç‹Ç≈
*/
