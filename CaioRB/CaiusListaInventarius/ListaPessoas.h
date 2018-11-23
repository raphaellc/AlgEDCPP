#pragma once
#include "Pessoa.h"
#include "Lista.h"

class ListaPessoas : public Lista<Pessoa>
{

public:
	ListaPessoas();
	~ListaPessoas();
	void percorreLista(No<Pessoa> * lista);
	void insereFimLista(Pessoa * p);
};