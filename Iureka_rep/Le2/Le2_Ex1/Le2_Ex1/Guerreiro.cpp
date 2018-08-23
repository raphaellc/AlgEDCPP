#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
	/*int forca, stamina, vida, pocoes;
	std::string nome;*/
	forca = 10;
	stamina = 100;
	vida = 100;
	pocoes = 3;
	nome = "Dilmo";
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::atacar()
{
	std::cout << "Toma, miser�vi! *Atacando*" << std::endl;
}

void Guerreiro::pular()
{
	std::cout << "Hump! *Pulo*" << std::endl;
}

void Guerreiro::amedrontar()
{
	std::cout << "Sou o grande " << nome<< ", e irei destru�-lo!" << std::endl;
}

void Guerreiro::curar()
{
	std::cout << "Glump *Tomando poc�o*" << std::endl;
	pocoes--;
}

void Guerreiro::defender()
{
	std::cout << "Out, essa foi por pouco! *Defendendo*" << std::endl;
}
