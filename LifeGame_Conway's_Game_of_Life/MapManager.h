/*

	MapManager.h
	Create 4/16

*/



#pragma once

#include "MajorBase.h"
#include "Library.h"
#include <vector>
#include <memory>

namespace LifeGame
{
	class Chunk;

	class MapManager : Lib::MajorBase{
	public:
		void Initialize();//初期化
		void Reset();//初期値にリセット
		void Run();
		void Draw();

	private:
		void CreateChunk();//チャンク生成

		std::vector<std::shared_ptr<Chunk>> ChunkList;
	};









}





