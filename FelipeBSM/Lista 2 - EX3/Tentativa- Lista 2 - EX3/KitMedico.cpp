#include "pch.h"
#include "KitMedico.h"
#include <iostream>

KitMedico::KitMedico()
{
	vida = 100;
}

KitMedico::~KitMedico()
{
}

void KitMedico::hp()
{
	int opc;
	std::cout << "Voc� deseja usar um Kit M�dico?[1]Sim / [2]N�o " << "\n";
	std::cin >> opc;

	if(opc == 1)
	{
	
		std::cout << "Voc� usou Kit M�dico! Vida Atual: " << vida << "\n";
	
	}
	else if(opc == 2)
	{
	
		std::cout << "Voc� n�o usou Kit M�dico! Vida Atual: " << vida - 50 << "\n";
	
	}
}
