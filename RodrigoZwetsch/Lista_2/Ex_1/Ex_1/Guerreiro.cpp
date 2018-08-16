#include "Guerreiro.h"
#include "string.h"

Guerreiro::Guerreiro()
{
	this->for�a = 10;
	this->dano = 20;
	this->vida = 200;
	this->estamina = 150;
	this->mana = 30;
}

Guerreiro::~Guerreiro()
{
}

int Guerreiro::getFor�a()
{
	return for�a;
}

int Guerreiro::getDano()
{
	return dano;
}

int Guerreiro::getVida()
{
	return vida;
}

int Guerreiro::getEstamina()
{
	return estamina;
}

int Guerreiro::getMana()
{
	return mana;
}

void Guerreiro::andar()
{
	std::cout << "Voc� ando um metro." << std::endl;
}

void Guerreiro::pular()
{
	std::cout << "Voc� pulou." << std::endl;
}

void Guerreiro::Atacar()
{
	std::cout << "Voc� atacou e deu 20 de dano." << std::endl;
}

void Guerreiro::UsarHabilidade()
{
	std::cout << "Voc� usou furia 50% porcento a mais de dano." << std::endl;
}

void Guerreiro::Falar()
{
	std::cout << "Voc� falou algo que idiota." << std::endl;
}