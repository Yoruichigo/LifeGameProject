/*

	MapManager.cpp
	Create 4/16

*/


#include "MapManager.h"

#include "Chunk.h"



using namespace LifeGame;



//初期化
void MapManager::Initialize()
{
	
	this->CreateChunk();
	for(auto& data : ChunkList){
		data->Initialize();
	}
	
}

//チャンク生成
void MapManager::CreateChunk()
{
	
	for(int x = 0 ; x < 1 ; x++)
	{
		for(int y = 0 ; y < 1 ; y++)
		{
			ChunkList.push_back(std::make_shared<Chunk>());
		}
	}
	
}


//リセット
void MapManager::Reset()
{

}


//更新
void MapManager::Run()
{
	
	for(auto& data : ChunkList)
	{
		data->Run();
	}
	
}



void MapManager::Draw()
{
	for(auto& data : ChunkList)
	{
		data->Draw();
	}

}