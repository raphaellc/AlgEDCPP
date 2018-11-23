#pragma once
#include "Pessoa.h"

template <class T>
class No
{

public:
	No();
	~No();
	T * info;
	No<T> * proximo; 

};
template <class T>
No<T>::No() 
{
}

template <class T>
No<T>::~No()
{
}