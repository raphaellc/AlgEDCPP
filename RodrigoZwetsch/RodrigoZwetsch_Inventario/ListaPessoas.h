#pragma once
#include "No.h"
#include "Item.h"
#include "Lista.h"

class ListaPessoas : public Lista<Item>
{
public:
	ListaPessoas();
	~ListaPessoas();
	void percorreLista(No<Item> * lista);
	void insereFimLista(Item * i);
};

