#include "pch.h"
#include "Armadura.h"

#include <iostream>

Armadura::Armadura()
{

}


Armadura::~Armadura()
{
}

void Armadura::protection()
{
	int op;
	std::cout << "Deseja usar seu escudo bal�stico?[1].Sim / [2].N�o " << "\n";
	std::cin >> op;
	if(op == 1)
	{
		defesa = 5;
		std::cout << "Defesa: " << defesa << " Pontos acrecentados!" << "\n";
	   
	}
	else if(op == 2)
	{
		std::cout << "Voc� n�o esta usando escudo bal�stico." << "\n";
	    
	}
	
}