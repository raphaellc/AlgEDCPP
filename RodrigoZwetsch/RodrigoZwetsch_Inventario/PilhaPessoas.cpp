#include "PilhaPessoas.h"

PilhaPessoas::PilhaPessoas()
{
}

PilhaPessoas::~PilhaPessoas()
{
}

void PilhaPessoas::push(Item * i)
{
	No<Item> * no = new No<Item>;
	no->info = i;
	no->proximo = nullptr;
	Lista<Item>::insereFimLista(no);
}

Item PilhaPessoas::topo()
{
	percorreLista(Lista<Item>::lista);
	return *Lista<Item>::lista_aux->info;
}

/*
void PilhaPessoas::pop() {
	Lista<Item>::removeUltimoNo(lista);
}
//*/