#include "ListaPessoas.h"

ListaPessoas::ListaPessoas()
{
}

ListaPessoas::~ListaPessoas()
{
}

void ListaPessoas::percorreLista(No<Pessoa> * lista)
{
	if (lista != nullptr) 
	{
		std::cout << lista->info->s_nome << std::endl;
		percorreLista(lista->proximo);
	}
}

void ListaPessoas::insereFimLista(Pessoa * p)
{
	No<Pessoa> * no = new No<Pessoa>;
	no->info = p;
	no->proximo = nullptr;
	Lista<Pessoa>::insereFimLista(no);
}