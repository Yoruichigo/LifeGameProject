/*

	cpp
	ChunkClass
	Create 4/25

*/


#include "Chunk.h"


#include "Cell.h"


using namespace LifeGame;

//�`�����N������
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


//�Z���̐���
void Chunk::CreateCell()
{

	const int CellSize = 32;//�Z���T�C�Y
	const int CellSpace = 1;//�Z���X�y�[�X
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

//�X�V
void Chunk::Run()
{


}


//�`��
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