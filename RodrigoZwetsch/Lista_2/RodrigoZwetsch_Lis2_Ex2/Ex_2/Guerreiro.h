#pragma once

#include <string>
#include <iostream>

using namespace std;

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	int for�a, dano, vida, estamina, mana, defesa;

	int getFor�a();
	int getDano();
	int getVida();
	int getEstamina();
	int getMana();
	int getDefesa();

	void andar();
	void pular();
	void Atacar();
	void Defender();
	void Falar();

	void Dados();
};