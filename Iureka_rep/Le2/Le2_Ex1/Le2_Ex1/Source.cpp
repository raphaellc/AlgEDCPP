/*  Voc� precisa desenvolver um RPG e neste jogo � necess�rio criar uma classe guerreiro. Defina os
atributos que caracterizam um guerreiro (m�nimo 5 e no m�ximo 10) e uma cole��o de
comportamentos (m�nimo 5). A implementa��o destes m�todos pode ser feita de forma
simplificada, por exemplo, escrevendo alguma mensagem no console.  */
#include "Guerreiro.h"

int main()
{
	Guerreiro player;
	player.amedrontar();
	player.atacar();
	player.pular();
	player.defender();
	player.curar();
		
	system("pause");
	return 0;
}