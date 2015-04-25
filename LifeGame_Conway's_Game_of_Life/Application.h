/*

	ApplicationManager
	Application.h
	Create 4/16

*/

#pragma once

#include "Singleton.h"
#include "Library.h"
#include <memory>


namespace LifeGame
{

	class MapManager;

	class AppManager : public Lib::Singleton<AppManager>
	{friend class Lib::Singleton<AppManager>;
	public:
		void Initialize();
		void Run();

	private:
		AppManager(){}
		~AppManager(){}
		void Draw();

		std::shared_ptr<MapManager> Map;
	};




}

