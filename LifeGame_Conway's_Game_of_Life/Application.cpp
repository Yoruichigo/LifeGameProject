/*

	ApplicationManager
	Application.cpp
	Create 4/16

*/


#include "MapManager.h"

#include "Application.h"


using namespace LifeGame;



void AppManager::Initialize()
{

	Map = std::make_shared<MapManager>();
	Map->Initialize();

	
}


void AppManager::Run()
{
	{
		auto CameraIns = GETINSTANCE(Lib::Camera);
		if(CheckHitKey(KEY_INPUT_UP)==1)
		{
			CameraIns->AddPosition(0,10);
		}
		if(CheckHitKey(KEY_INPUT_DOWN)==1)
		{
			CameraIns->AddPosition(0,-10);
		}
		if(CheckHitKey(KEY_INPUT_LEFT)==1)
		{
			CameraIns->AddPosition(10,0);
		}
		if(CheckHitKey(KEY_INPUT_RIGHT)==1)
		{
			CameraIns->AddPosition(-10,0);
		}
	}

	Map->Run();

	this->Draw();
}


void AppManager::Draw()
{
	Lib::ScreenClear();


	Map->Draw();



	Lib::ScreenRender();

}




