#include "Clerigo.h"

Clerigo::Clerigo()
{
	this->for�a = 4;
	this->dano = 4;
	this->vida = 80;
	this->estamina = 50;
	this->mana = 230;
	this->defesa = 8;
}

Clerigo::~Clerigo()
{
}

void Clerigo::Cura()
{
	std::cout << "O Paposo curou 15% da vida total de seus aliados." << std::endl;
}
