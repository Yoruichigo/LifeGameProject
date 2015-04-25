/*

	Cell.h
	１マスのセルクラス
	Create 4/16

*/


#pragma once


#include "Library.h"


namespace LifeGame
{

	class Cell{
	public:
		Cell(const Lib::Square &GraphicData);//Squareデータで直接渡してください
		void Initialize();//初期化
		void Reset();//リセット
		void Run();//更新
		void Draw();//描画
		const bool OrAlive()const{return Life;}//Live=true, Dead=false,

	private:
		Lib::Square Graph;
		bool Life;//Live=true, Dead=false,
	};


}



