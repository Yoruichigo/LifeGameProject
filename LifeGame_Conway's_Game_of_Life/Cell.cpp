/*

	Cell.cpp
	１マスのセルクラス
	Create 4/16
	
*/


#include "Cell.h"




using namespace LifeGame;




Cell::Cell(const Lib::Square &GraphicData):
	Graph(GraphicData)
{
	this->Initialize();
	
}



void Cell::Initialize()
{
	Life = false;
}



void Cell::Run()
{
	Graph.x ++;
}



void Cell::Draw()
{
	Graph.WorldDrawBox();
}








