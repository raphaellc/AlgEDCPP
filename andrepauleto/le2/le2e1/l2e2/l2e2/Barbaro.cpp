#include "Barbaro.h"



Barbaro::Barbaro()
{
	this->nome = "B�rbaro";
	this->forca = 11;
	this->vida = 5;
	this->defesa = 5;
	this->destreza = 3;
	this->inteligencia = 1;
}


Barbaro::~Barbaro()
{
}

void Barbaro::enfurecer()
{
	std::cout << "- B�RBARO - ENFURECER" << std::endl;
}
