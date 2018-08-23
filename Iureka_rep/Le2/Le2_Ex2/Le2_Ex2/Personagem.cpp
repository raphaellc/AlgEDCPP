#include "Personagem.h"



Personagem::Personagem()
{
	forca = 10;
	stamina = 100;
	vida = 100;
	pocoes = 3;
}


Personagem::~Personagem()
{
}

void Personagem::atacar()
{
	std::cout << "Toma, miser�vi! *Atacando*" << std::endl;
}

void Personagem::pular()
{
	std::cout << "Hump! *Pulo*" << std::endl;
}

void Personagem::amedrontar()
{
	std::cout << "Sou o grande " << nome << ", e irei destru�-lo!" << std::endl;
}

void Personagem::curar()
{
	std::cout << "Glump *Tomando poc�o*" << std::endl;
	pocoes--;
}

void Personagem::defender()
{
	std::cout << "Out, essa foi por pouco! *Defendendo*" << std::endl;
}

