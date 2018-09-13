#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

// SUBSTITUIR OS "CLASSE::" POR THIS-> 

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	this->f_mapa_assets.open("..\\mapa_assets.txt", ios::in);
	if (!f_mapa_assets) 
		gDebug.erro("não abriu arquivo", this);

	CarregadorDeAssets* cda_carregador_assets = new CarregadorDeAssets;
	if (!cda_carregador_assets->carregarRecursos(f_mapa_assets)) {
		gDebug.erro("Falha no carregamento de recursos");
	}
	else {
		cda_carregador_assets->carregarRecursos(f_mapa_assets);
	}

	characters[0] = new Knight;
}

void Jogo::finalizar()
{
	gRecursos.descarregarTudo();

	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();

		

		uniTerminarFrame();
	}
}