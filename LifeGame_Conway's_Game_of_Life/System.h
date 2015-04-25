/*

	System.h
	Create 4/16

*/

#pragma once

//Include
#include <cassert>



//初期ウィンドウサイズ
#define INITIALIZE_WINDOWSIZE_WIDTH (800)
#define INITIALIZE_WINDOWSIZE_HEIGHT (600)


namespace MySystem{}
namespace Sys = MySystem;//省略用
namespace MySystem
{
	//ウィンドウ情報
	class WindowInfo{
	public:
		static const int GetWidth(){return width;}
		static const int GetHeight(){return height;}
	private:
		static int width;
		static int height;
	};


}

