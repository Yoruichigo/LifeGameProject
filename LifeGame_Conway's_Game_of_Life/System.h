/*

	System.h
	Create 4/16

*/

#pragma once

//Include
#include <cassert>



//�����E�B���h�E�T�C�Y
#define INITIALIZE_WINDOWSIZE_WIDTH (800)
#define INITIALIZE_WINDOWSIZE_HEIGHT (600)


namespace MySystem{}
namespace Sys = MySystem;//�ȗ��p
namespace MySystem
{
	//�E�B���h�E���
	class WindowInfo{
	public:
		static const int GetWidth(){return width;}
		static const int GetHeight(){return height;}
	private:
		static int width;
		static int height;
	};


}

