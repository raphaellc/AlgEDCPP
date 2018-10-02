#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	// gRecursos.carregarSpriteSheet("knight", "assets/spritesheets/Knight.png", 4, 4); precisa disso mesmo com o metodo de carregar??

	this->f_mapa_assets.open("..\\mapa_assets.txt", ios::in);
	if (!f_mapa_assets) 
		gDebug.erro("não abriu arquivo", this);

	CarregadorDeAssets* cda_carregador_assets = new CarregadorDeAssets; // cda_carregador_assets?
	if (!cda_carregador_assets->carregarRecursos(f_mapa_assets)) {
		gDebug.erro("Falha no carregamento de recursos");
	}
	else {
		CarregadorDeAssets::carregarRecursos(f_mapa_assets); // passar o que pro método?
	}

	characters[0] = new Knight;

	// characters[0]->setSpriteSheet("knight"); precisa disso mesmo com o metodo de carregar??
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

		//	Seu código vem aqui!
		//	...

		uniTerminarFrame();
	}
}