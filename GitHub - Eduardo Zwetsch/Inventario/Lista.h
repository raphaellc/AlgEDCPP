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
	bool listaVazia();//true = vazia; false = não vazia
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
	if (lista != nullptr) {
		lista_aux = lista;
		percorreLista(lista->proximo);
	}
}

template <class T>
void Lista<T>::insereFimLista(No<T> * no)
{
	if (listaVazia()) { //se é vazia
		this->lista = no;//insere o primeiro elemento
		this->tam++;
	}
	else {
		this->lista_aux = this->lista; //inicializa variavel aux
									   //enquanto não chegou no último nó da lista
		while (this->lista_aux->proximo != nullptr) {
			this->lista_aux = this->lista_aux->proximo;
		}
		//lista_aux aponta para o último nó da lista
		this->lista_aux->proximo = no; //atribui novo nó
		this->tam++;
	}
}

template<class T>
void Lista<T>::inserirInicioLista(No<T>* no)
{
	if (!listaVazia()) {
		no->proximo = lista;
		lista = no;
		tam++;
	}
	else {
		lista = no;//insere o primeiro elemento
		tam++;
	}
}

template <class T>
void Lista<T>::insereEm(int posicao, No<T> * no)
{
	//declarar o índice
	int i = 0;
	No<T> * no_ant = nullptr;
	//inicializa o ponteiro para percorrer a lista
	this->lista_aux = this->lista;
	no_ant = this->lista;
	if (posicao <= this->tam) {

		while (i <= posicao) {
			if (i == posicao) {
				//atualiza o nó
				if (listaVazia()) {
					insereFimLista(no);
				}
				else {
					if (posicao == 0) {
						//todo insereInicioLista ou push_front
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
			//atualiza o nó anterior
			no_ant = this->lista_aux;
			this->lista_aux = this->lista_aux->proximo;
			i++;
		}
	}
	else {
		//posicao inválida
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
	if (this->lista != nullptr) {
		this->lista_aux = this->lista;
		while (this->lista_aux != nullptr) {
			//primeiro passo: atualizar lista_aux para o próximo nó
			this->lista_aux = this->lista->proximo;
			//segundo passo: deletar o nó
			delete this->lista;
			//terceiro passo: atualizar a lista para o próximo nó
			this->lista = this->lista_aux;
		}
	}
}

template <class T>
void Lista<T>::removeUltimoNo(No<T> * lst) {
	if (lst != nullptr) {
		if (lst->proximo != nullptr) {
			this->lista_aux = lst;
			lista = lst->proximo;
			percorreLista(lista);
		}
		else {
			//cheguei no último elemento
			lista_aux->proximo = nullptr; //penultimo atualiza ponteiro próximo
			delete lst; //deleta ultimo nó
			tam--;
		}
	}

}

template<class T>
T* Lista<T>::removePrimeiroNo()
{
	T* info = nullptr;
	if (!listaVazia()) {
		lista_aux = lista;
		lista = lista->proximo;
		info = lista_aux->info;
		delete lista_aux;
		tam--;
	}
	return info;
}
