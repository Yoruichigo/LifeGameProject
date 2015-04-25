/*

	MapManager.cpp
	Create 4/16

*/


#include "MapManager.h"

#include "Chunk.h"



using namespace LifeGame;



//������
void MapManager::Initialize()
{
	
	this->CreateChunk();
	for(auto& data : ChunkList){
		data->Initialize();
	}
	
}

//�`�����N����
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


//���Z�b�g
void MapManager::Reset()
{

}


//�X�V
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