/*

	WinMain
	Create 4/15

*/


#define _CRTDBG_MAP_ALLOC

#include <stdlib.h>

#include <crtdbg.h>


#include <Windows.h>
#include <Dxlib.h>
#include "System.h"

#include "Application.h"



bool GameBreakFlag = false;

int WINAPI WinMain(
	HINSTANCE hInstance,HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow )
{
	_CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );

	//SetFullSceneAntiAliasingMode( 16,2 );
	
	
	SetGraphMode(Sys::WindowInfo::GetWidth(),Sys::WindowInfo::GetHeight(),32) ;
	ChangeWindowMode( TRUE ) ;

	assert( DxLib_Init() == 0 );

	Lib::MyLibraryInitialize();

	LifeGame::AppManager::Instance.Create();
	GETINSTANCE(LifeGame::AppManager)->Initialize();

	while(true && GameBreakFlag == false)
	{
		if( ProcessMessage() == -1 )
		{
			break ;
		}
		//Run
		GETINSTANCE(LifeGame::AppManager)->Run();
	}

	LifeGame::AppManager::Instance.Delete();

	Lib::MyLibraryEnd();

	DxLib_End();


	return 0 ;
}


void GameBreak()
{
	GameBreakFlag = true;
}