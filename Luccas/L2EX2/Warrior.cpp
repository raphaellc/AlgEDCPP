#include <iostream>
#include "Warrior.h"
Warrior::Warrior()
{
}

Warrior::~Warrior()
{
}

void Warrior::correr()
{
	std::cout << "Run Bizi, run...\n";
}

void Warrior::bloquear()
{
	std::cout << "N�O ME TOCA!!!\n";
}

void Warrior::atacar()
{
	std::cout << "TOMA ESSE SOCO MEU CONSAGRADO!\n";
}

void Warrior::esquivar()
{
	std::cout << "OL�!!!\n";
}

void Warrior::descansar()
{
	std::cout << "Bah cansei na real espera a� um pouquinho...\n";
}