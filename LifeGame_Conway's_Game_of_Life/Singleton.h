/*

	Singleton�p�̐e�N���X
	Singleton.h
	Create 4/16

	friendclass�ɐݒ肵�Ă�������
*/

#pragma once

#define GETINSTANCE(x) (&x::Instance.Get())

namespace Lib
{


	template<class T>
	class Singleton{
	public:
			struct
			{
				static T &Get(){
					return *MyInstance;
				}

				static const bool Create(){
					if(MyInstance == nullptr){MyInstance = new T();return true;}
					else{return false;}
				}

				static const bool Delete(){
					if(MyInstance != nullptr){delete MyInstance;return true;}
					else{return false;}
				}
			}static Instance;
	protected:
		Singleton(){};
		virtual ~Singleton(){};

	private:
		static T *MyInstance;

	};

	//�錾
	template<class T>
	T *Singleton<T>::MyInstance;


}
