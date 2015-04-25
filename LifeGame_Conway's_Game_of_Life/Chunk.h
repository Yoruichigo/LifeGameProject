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
		void Initialize();//初期化処理
		void Reset();//初期値にリセット
		void Run();
		void Draw();
		
	private:
		
		void CreateCell();//セル生成
		static const int CellNum = 10;//１チャンク内でのセルの数(x&y)

		std::shared_ptr<Cell> CellList[CellNum][CellNum];

	};




}




