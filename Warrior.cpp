#include <iostream>
#include "Warrior.h"




Warrior::Warrior()
{
}


Warrior::~Warrior()
{
}

void Warrior::run()
{
	std::cout << "Run Bizi, run...\n";
}

void Warrior::block()
{
	std::cout << "N�O ME TOCA!!!\n";
}

void Warrior::attack()
{
	std::cout << "TOMA ESSE SOCO MEU CONSAGRADO!\n";
}

void Warrior::dodge()
{
	std::cout << "OL�!!!\n";
}

void Warrior::rest()
{
	std::cout << "Bah cansei na real espera a� um pouquinho...\n";
}
