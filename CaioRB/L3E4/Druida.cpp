#include "Druida.h"



Druida::Druida()
{
}


Druida::~Druida()
{
}


void Druida::curar()
{
	if (mana > 10)
	{
		cout << "Abrece o poder da natureza!\n";
	}
	else
	{
		cout << "Pe�o que aguente firme, amigo.\n";
	}
}

void Druida::reviver()
{
	if (mana > 150)
	{
		cout << "Volte a caminhar no mundo dos vivos.\n";
	}
	else
	{
		cout << "Nem mesmo eu posso mudar a balan�a. Pe�o perd�o.\n";
	}
}