#include <iostream>
#include "stdafx.h"
#include "atirador.h"
using namespace std;

int main()
{
	atirador Pel�verton;
	cout << "Atributos do personagem:\n";
	Pel�verton.getArmadura(2);
	Pel�verton.getVida(2);
	Pel�verton.getMC(15);
	Pel�verton.getMP(25);
	Pel�verton.getMR(30);
	Pel�verton.equipPistola('S');
	Pel�verton.equipCarabina('S');
	Pel�verton.equipRifle('N');
	system("pause");
    return 0;
}

