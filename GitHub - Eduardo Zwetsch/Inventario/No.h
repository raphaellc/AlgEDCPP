#pragma once
#include "Pessoa.h"
template <class T>
class No
{
public:
	No();
	~No();
	T * info; //informação que será armazenada
	No<T> * proximo; //ponteiro para o próximo nó

};
template <class T>
No<T>::No() {}
template <class T>
No<T>::~No()
{
}
