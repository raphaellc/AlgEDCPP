#include "PilhaPessoas.h"



PilhaPessoas::PilhaPessoas()
{
}


PilhaPessoas::~PilhaPessoas()
{
}

void PilhaPessoas::push(Pessoa * p)
{
	No<Pessoa> * no = new No<Pessoa>;
	no->info = p;
	no->proximo = nullptr;
	Lista<Pessoa>::insereFimLista(no);
}

void PilhaPessoas::pop()
{
	Lista<Pessoa>::removeUltimoNo(lista);
}

Pessoa PilhaPessoas::topo()
{
	percorreLista(lista);
	return *lista_aux->info;
}