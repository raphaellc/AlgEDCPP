#include "Clerigo.h"

Clerigo::Clerigo()
{
	this->nome = "Cl�rigo";
	this->forca = 1;
	this->vida = 3;
	this->defesa = 3;
	this->destreza = 3;
	this->inteligencia = 7;
}


Clerigo::~Clerigo()
{
}

void Clerigo::curar()
{
	std::cout << "- CL�RIGO - CURAR" << std::endl;
}