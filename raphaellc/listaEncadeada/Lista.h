#pragma once
#include "No.h"
class Lista
{
public:
	Lista();
	~Lista();
	No * lista, * lista_aux;
	void percorreLista(No * lista);
	void insereFimLista(No * no);
	void inserirInicioLista(No * no);
	bool removeUltimoNo();
	bool removePrimeiroNo();
	void insereEm(int posicao, No * no);
	int obtemTamanhoLista();
	bool listaVazia();//true = vazia; false = n�o vazia
	void esvaziaLista();
protected:
	int tam;
};

