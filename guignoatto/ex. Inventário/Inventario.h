#pragma once
#include "Lista.h"

class Inventario : public Lista<Inventario>
{
public:
	Inventario();
	~Inventario();
};

