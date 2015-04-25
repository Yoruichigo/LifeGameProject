/*

	cpp
	ChunkClass
	Create 4/25

*/


#include "Chunk.h"


#include "Cell.h"


using namespace LifeGame;

//チャンク初期化
void Chunk::Initialize()
{
	this->CreateCell();
	for(auto& Data1 : CellList)
	{
		for(auto& Data2 : Data1)
		{
			Data2->Initialize();
		}
	}
}


//セルの生成
void Chunk::CreateCell()
{

	const int CellSize = 32;//セルサイズ
	const int CellSpace = 1;//セルスペース
	const int CellColor = 0x00ff00;

		
	for(int x = 0; x < CellNum ; x++)
	{
		for(int y = 0 ; y < CellNum ; y++)
		{
			(CellList[x][y]) = std::make_shared<Cell>(Lib::Square(
				(CellSize + CellSpace) * x , (CellSize + CellSpace) * y,
				CellSize , CellSize,CellColor ));

		}
	}

}

//更新
void Chunk::Run()
{


}


//描画
void Chunk::Draw()
{
	
	for(auto& Data1 : CellList)
	{
		for(auto& Data2 : Data1)
		{
			Data2->Draw();
		}
	}

}