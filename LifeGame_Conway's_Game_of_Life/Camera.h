/*
	header
	CameraClass
	ƒ[ƒ‹ƒhÀ•W‚©‚çˆê•”‚ğØ‚èæ‚è•`‰æ

	Create 4/25
*/



#pragma once

#include <Dxlib.h>

#include "Singleton.h"


namespace Lib
{

	class Camera : public Lib::Singleton<Camera>
	{friend Singleton<Camera>;
	public:

		void Initialize();
		void SetPosition(int x,int y);
		void AddPosition(int x,int y);
		int GetX(){return x;}
		int GetY(){return y;}
		int GetWidth(){return width;}
		int GetHeight(){return height;}

	private:
		Camera(){};
		~Camera(){};

		int x,y,width,height;
	};




}





