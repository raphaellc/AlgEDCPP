#pragma once
#include "Lista.h"
#include"Item.h"

class Inventario :
	public Lista<Item>
{
public:
	Inventario();
	~Inventario();

	void percorreInventario(No<Item> * lista);
	void insereFimInventario(Item * i);
};