//Classe Fila, com os m�todos necess�rios herdando de Lista<Pessoa>
#pragma once
#include "Lista.h"
class Fila :
	public Lista<Pessoa>
{
public:
	Fila();
	~Fila();

	void enfileirarNoFinal(Pessoa * p);
	void desenfileirar();

};

