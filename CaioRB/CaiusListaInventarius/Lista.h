#pragma once
#include <iostream>
#include "No.h"

using namespace std;
template <class T>
class Lista
{
public:
	Lista();
	~Lista();
	No<T> * lista, *lista_aux;
	void percorreLista(No<T> * lista);
	void insereFimLista(No<T> * no);
	void inserirInicioLista(No<T> * no);
	void removeUltimoNo(No<T> * lst);
	
	T* removePrimeiroNo();
	void insereEm(int posicao, No<T> * no);
	int obtemTamanhoLista();
	bool listaVazia();
	void esvaziaLista();

protected:
	int tam;
};
template <class T>
Lista<T>::Lista()
{
	this->tam = 0;
}
template <class T>
Lista<T>::~Lista()
{
}
template <class T>
void Lista<T>::percorreLista(No<T> * lista)
{
	if (lista != nullptr) 
	{
		lista_aux = lista;
		percorreLista(lista->proximo);
	}
}
template <class T>
void Lista<T>::insereFimLista(No<T> * no)
{
	if (listaVazia()) 
	{ 
		this->lista = no;
		this->tam++;
	}
	else 
	{
		this->lista_aux = this->lista; 
									   
		while (this->lista_aux->proximo != nullptr) 
		{
			this->lista_aux = this->lista_aux->proximo;
		}
		this->lista_aux->proximo = no;
		this->tam++;
	}
}
template<class T>
void Lista<T>::inserirInicioLista(No<T>* no)
{
	if (!listaVazia()) 
	{
		no->proximo = lista;
		lista = no;
		tam++;
	}
	else {
		lista = no;
		tam++;
	}
}
template <class T>
void Lista<T>::insereEm(int posicao, No<T> * no)
{	
	int i = 0;
	No<T> * no_ant = nullptr;	
	this->lista_aux = this->lista;
	no_ant = this->lista;
	if (posicao <= this->tam) 
	{
		while (i <= posicao)
		{
			if (i == posicao) 
			{
				
				if (listaVazia()) 
				{
					insereFimLista(no);
				}
				else {
					if (posicao == 0)
					{											
						no->proximo = this->lista;
						this->lista = no;
					}
					else {
						no->proximo = this->lista_aux;
						no_ant->proximo = no;
					}
				}
				this->tam++;
			}			
			no_ant = this->lista_aux;
			this->lista_aux = this->lista_aux->proximo;
			i++;
		}
	}
	else 
	{
		
	}
}
template <class T>
int Lista<T>::obtemTamanhoLista()
{
	return this->tam;
}

template <class T>
bool Lista<T>::listaVazia()
{
	if (this->lista == nullptr)
		return true;
	else
		return false;
}

template <class T>
void Lista<T>::esvaziaLista()
{
	if (this->lista != nullptr) 
	{
		this->lista_aux = this->lista;
		while (this->lista_aux != nullptr) 
		{		
			this->lista_aux = this->lista->proximo;			
			delete this->lista;			
			this->lista = this->lista_aux;
		}
	}
}
template <class T>
void Lista<T>::removeUltimoNo(No<T> * lst) 
{
	if (lst != nullptr) 
	{
		if (lst->proximo != nullptr) 
		{
			this->lista_aux = lst;
			lista = lst->proximo;
			percorreLista(lista);
		}
		else 
		{			
			lista_aux->proximo = nullptr; 
			delete lst; 
			tam--;
		}
	}
}
template<class T>
T* Lista<T>::removePrimeiroNo()
{
	T* info = nullptr;
	if (!listaVazia()) 
	{
		lista_aux = lista;
		lista = lista->proximo;
		info = lista_aux->info;
		delete lista_aux;
		tam--;
	}
	return info;
}