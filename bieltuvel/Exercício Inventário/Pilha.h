//Classe Pilha, com os m�todos necess�rios herdando de Lista<Pessoa>
#pragma once
#include "Lista.h"
#include "Pessoa.h"

class Pilha : Lista<Pessoa>
{
public:
	Pilha();
	~Pilha();
	void push(Pessoa * p);
	void pop();
	Pessoa topo();

};

