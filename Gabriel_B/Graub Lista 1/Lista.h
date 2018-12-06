#pragma once
#include "No.h"
template <class T>
class Lista
{
public:
	Lista();
	~Lista();
	No<T> * lista, *lista_aux;
	void percorreLista(No<T> * lista);
	
	void inserirInicioLista(No<T> * no);
	bool removeUltimoNo(No<T> * lst);
	bool removePrimeiroNo();
	void insereEm(int posicao, No<T> * no);
	int obtemTamanhoLista();
	bool listaVazia();//true = vazia; false = n�o vazia
	
	//Questoes do exercicio 7
	void inicioLista(No<T> * item);
	int tamanhoLista();
	bool esvaziaLista();
	No<T>* obtemUltimoNo();
	void insereFimLista(No<T> * item);
	void removerNo();
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
		percorreLista(lista->proximo);
		tam++;
		lista_aux = lista;
	}
}
template <class T>
void Lista<T>::insereFimLista(No<T> * item)
{
	if (this->lista == nullptr) { //se � vazia
		this->lista = item;//insere o primeiro elemento
		this->tam++;
	}
	else {
		this->lista_aux = this->lista; //inicializa variavel aux
									   //enquanto n�o chegou no �ltimo n� da lista
		while (this->lista_aux->proximo != nullptr) {
			this->lista_aux = this->lista_aux->proximo;
		}
		//lista_aux aponta para o �ltimo n� da lista
		this->lista_aux->proximo = no; //atribui novo n�
		this->tam++;
	}
}
template<class T>
inline void Lista<T>::removerNo()
{
	if (lista != nullptr)
		lista_aux = lista;
	lista = lista->proximo;
	delete lista_aux;
}
template <class T>
void Lista<T>::insereEm(int posicao, No<T> * no)
{
	//declarar o �ndice
	int i = 0;
	No<T> * no_ant = nullptr;
	//inicializa o ponteiro para percorrer a lista
	this->lista_aux = this->lista;
	no_ant = this->lista;
	if (posicao <= this->tam) {

		while (i <= posicao) {
			if (i == posicao) {
				//atualiza o n�
				if (listaVazia()) {
					insereFimLista(no);
				}
				else {
					if (posicao == 0) {
						//@todo insereInicioLista ou push_front
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
			//atualiza o n� anterior
			no_ant = this->lista_aux;
			this->lista_aux = this->lista_aux->proximo;
			i++;
		}
	}
	else {
		//posicao inv�lida
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
bool Lista<T>::esvaziaLista()
{
	if (this->lista != nullptr) {
		this->lista_aux = this->lista;
		while (this->lista_aux != nullptr) {
			//primeiro passo: atualizar lista_aux para o pr�ximo n�
			this->lista_aux = this->lista->proximo;
			//segundo passo: deletar o n�
			delete this->lista;
			//terceiro passo: atualizar a lista para o pr�ximo n�
			this->lista = this->lista_aux;
			return true;
		}
	}
	else {
		return false;
	}
}
template<class T>
inline No<T>* Lista<T>::obtemUltimoNo()
{
	lista_aux = lista;
	while (lista_aux->proximo != nullptr) {
		 lista_aux = lista_aux->proximo;

	}

}
template<class T>
inline void Lista<T>::inicioLista(No<T>* item)
{
	lista = item;
}
template<class T>
inline int Lista<T>::tamanhoLista()
{
	No<T> * lista = new No<T>;
	percorreLista(lista);
	return tam;
}
template <class T>
bool Lista<T>::removeUltimoNo(No<T> * lst) {
	if (listaVazia()) {

		return false;
	}
	else {
		if (lst->proximo != nullptr) {
			this->lista_aux = lst;
			removeUltimoNo(lst->proximo);
		}
		else {
			if (lst->proximo == nullptr) {
				delete lst;//deleta ultimo n�
			}
			else {
				//cheguei no �ltimo elemento
				lista_aux->proximo = nullptr; //penultimo atualiza ponteiro pr�ximo
				delete lst; //deleta ultimo n�
			}
		}

		return true;
	}
}

