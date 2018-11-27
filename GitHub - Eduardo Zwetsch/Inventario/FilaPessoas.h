#pragma once
#include "Lista.h"
#include <iostream>
using namespace std;

class FilaPessoas :
	public Lista<Pessoa>
{
public:
	FilaPessoas();
	~FilaPessoas();

	void enfileirar(Pessoa * p);
	void desenfileirar();
	void percorrerFila(No<Pessoa> * lista);
};
