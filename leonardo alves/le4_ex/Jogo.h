#pragma once
#include <fstream>
#include "libUnicornio.h"
#include "CarregadorDeAssets.h"
#include "Human.h"
#include "Knight.h"

// não sei o que ta acontecendo, só anotando as dúvidas

class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();
	void executar();

private:
	Human* characters[3];
	fstream f_mapa_assets;
};

