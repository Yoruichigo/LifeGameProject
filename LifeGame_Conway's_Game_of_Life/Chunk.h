/*
	header
	ChunkClass
	Create 4/25
*/


#pragma once

#include <memory>



namespace LifeGame
{
	
	class Cell;

	class Chunk{
	public:
		void Initialize();//����������
		void Reset();//�����l�Ƀ��Z�b�g
		void Run();
		void Draw();
		
	private:
		
		void CreateCell();//�Z������
		static const int CellNum = 10;//�P�`�����N���ł̃Z���̐�(x&y)

		std::shared_ptr<Cell> CellList[CellNum][CellNum];

	};




}




