//Classe Invent�rio herdando de uma Lista<Item>
#pragma once
#include "Lista.h"
#include "Item.h"

class Inventario :
	public Lista<Item>
{
public: 
	Inventario();
	~Inventario();
	//Inserir Item na �ltima posi��o
	void inserirNaUltimaPos(Item * p);
	//Mostrar o �ltimo item da Lista
	void obterUltimoItem();
};

