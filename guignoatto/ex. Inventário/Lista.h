#pragma once
#include "No.h"


template <class T>
class Lista
{
public:
	Lista();
	~Lista();
	No<T> * lista, *lista_aux;

	No<T> * obterUltimoNo();
	void inserirNo(No<T> * no);
	int obtemTamanhoLista();
	bool esvaziaLista();
	void removerNo();
protected:
	int tam;
};

template <class T>
Lista<T>::Lista() {tam = 0};

template <class T>
Lista<T>::~Lista() {};


template<class T>
void Lista<T>::inserirNo(No<T> * no)
{
	if (lista != nullptr)
	{
		no->proximo = lista;
		lista = no;
	}
}

template <class T>
void Lista<T>::removerNo()
{
	if (lista != nullptr)
	{
		lista_aux = lista;
		while (lista_aux->proximo != nullptr)
		{
			lista_aux = lista_aux->proximo;
		}
		delete this->lista_aux;
	}
}

template <class T>
bool Lista<T>::esvaziaLista()
{
	if (lista != nullptr)
	{
		lista_aux = lista;
		while (lista->proximo != nullptr)
		{
			lista_aux = lista_aux->proximo;
			delete this->lista;
			lista = lista_aux;
		}
		return true;
	}
	else { return false };
}

template <class T>
int Lista<T>::obtemTamanhoLista() 
{
	lista_aux = lista;
	while (lista_aux->proximo != nullptr) 
	{
		lista_aux = lista_aux->proximo;
		tam++
	}
	return tam + 1;
}

template <class T>
No<T> * Lista<T>::obterUltimoNo()
{
	lista_aux = lista;
	while (lista_aux->proximo != nullptr)
	{
		lista_aux = lista_aux->proximo;
	}
	return lista_aux;

}
