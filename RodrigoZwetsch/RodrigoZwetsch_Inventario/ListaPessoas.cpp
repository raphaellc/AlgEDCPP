#include "ListaPessoas.h"

ListaPessoas::ListaPessoas()
{
}

ListaPessoas::~ListaPessoas()
{
}

void ListaPessoas::percorreLista(No<Item> * lista)
{
	if (lista != nullptr) {
		std::cout << lista->info->s_nome << std::endl;
		percorreLista(lista->proximo);
	}
}

void ListaPessoas::insereFimLista(Item * i)
{
	No<Item> * no = new No<Item>;
	no->info = i;
	no->proximo = nullptr;
	Lista<Item>::insereFimLista(no);
}
