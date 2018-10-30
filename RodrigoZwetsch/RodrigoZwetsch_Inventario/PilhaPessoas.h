#pragma once
#include "Lista.h"
#include "Item.h"
class PilhaPessoas : Lista<Item>
{
public:
	PilhaPessoas();
	~PilhaPessoas();
	void push(Item * p);
	//void pop();
	Item topo();
};

