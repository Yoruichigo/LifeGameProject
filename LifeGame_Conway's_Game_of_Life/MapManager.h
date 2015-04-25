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
		void Initialize();//������
		void Reset();//�����l�Ƀ��Z�b�g
		void Run();
		void Draw();

	private:
		void CreateChunk();//�`�����N����

		std::vector<std::shared_ptr<Chunk>> ChunkList;
	};









}





