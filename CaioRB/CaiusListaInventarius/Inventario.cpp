#include "Inventario.h"

Inventario::Inventario()
{
}

Inventario::~Inventario()
{
}

void Inventario::percorreInventario(No<Item> * lista)
{
	if (lista != nullptr)
	{
		std::cout << lista->info->nome_item << std::endl;
		percorreLista(lista->proximo);
	}
}

void Inventario::insereFimInventario(Item * i)
{
	No<Item> * no = new No<Item>;
	no->info = i;
	no->proximo = nullptr;
	Lista<Item>::insereFimLista(no);
}