#pragma once

template <class T>
class No
{
public:
	No();
	~No();
	T * informacao; //informação que será armazenada
	No<T> * proximo; //ponteiro para o próximo nó

};

template <class T>
No<T>::No() {};

template <class T>
No<T>::~No() {};
