
#pragma once
#include "Inventario.h"
class Jogador :
	public Inventario
{
public:
	Jogador();
	~Jogador();
	Item * item = new Item;


};