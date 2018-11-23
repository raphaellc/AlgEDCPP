#pragma once
#include "Inventario.h"

class Player :
	public Inventario
{

public:
	Player();
	~Player();
	Item * item = new Item;
};