#pragma once
#include <string.h>
#include <iostream>

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	int for�a, dano, vida, estamina, mana;

	int getFor�a();
	int getDano();
	int getVida();
	int getEstamina();
	int getMana();

	void andar();
	void pular();
	void Atacar();
	void UsarHabilidade();
	void Falar();



};