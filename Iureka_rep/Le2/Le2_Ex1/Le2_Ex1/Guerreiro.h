/*Voc� precisa desenvolver um RPG e neste jogo � necess�rio criar uma classe guerreiro. Defina os
atributos que caracterizam um guerreiro (m�nimo 5 e no m�ximo 10) e uma cole��o de
comportamentos (m�nimo 5). A implementa��o destes m�todos pode ser feita de forma
simplificada, por exemplo, escrevendo alguma mensagem no console.*/
#include <iostream>
#include <string>
#pragma once
//using namespace std;

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	
	void atacar();
	void pular();
	void amedrontar();
	void curar();
	void defender();


protected:
	int forca, stamina, vida, pocoes;
	std::string nome;
	
};

