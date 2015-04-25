/*

	Cell.h
	�P�}�X�̃Z���N���X
	Create 4/16

*/


#pragma once


#include "Library.h"


namespace LifeGame
{

	class Cell{
	public:
		Cell(const Lib::Square &GraphicData);//Square�f�[�^�Œ��ړn���Ă�������
		void Initialize();//������
		void Reset();//���Z�b�g
		void Run();//�X�V
		void Draw();//�`��
		const bool OrAlive()const{return Life;}//Live=true, Dead=false,

	private:
		Lib::Square Graph;
		bool Life;//Live=true, Dead=false,
	};


}



