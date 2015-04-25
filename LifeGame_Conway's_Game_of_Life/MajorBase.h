/*
	
	MajorBaceClass
	Initialize‚ÆRun‚ªŽg‚¦‚éƒNƒ‰ƒX

*/


#pragma once



namespace Lib
{

	class MajorBase{
	public:
		virtual ~MajorBase(){};
		virtual void Initialize() = 0;
		virtual void Run() = 0;
	};





}


