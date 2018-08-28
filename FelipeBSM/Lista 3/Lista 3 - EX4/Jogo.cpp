#include "Jogo.h"
#include "CamadaDeObjetosTileMap.h"
#include "Mago.h"
#include "Guerreiro.h"
#include "Ladrao.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	
	uniInicializar(800, 600, false);
	mapa.carregar("");
	gRecursos.carregarSpriteSheet("Mago", "", 4, 4);

	personagem[0]->setSpriteSheet("Mago");
	ObjetoTileMap * objPos = mapa.getCamadaDeObjetos("Objetos")->getObjeto("Pos1");
	personagem[0]->setPosCentro(objPos->getPosCentro());
	
	
	//	O resto da inicializa��o vem aqui!
	//	...
}

void Jogo::finalizar()
{
	//	O resto da finaliza��o vem aqui (provavelmente, em ordem inversa a inicializa��o)!
	//	...
	
	mapa.descarregar();
	gRecursos.descarregarTudo();
	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{   
		uniIniciarFrame();

		//	Seu c�digo vem aqui!
		//	...
		//seria isso o certo para fazer?

		
		personagem[0] = new Mago();
		personagem[0]->atualizar();
		personagem[0]->desenhar();

		personagem[1] = new Guerreiro();
		personagem[1]->atualizar();
		personagem[1]->desenhar();

		personagem[2] = new Ladrao();
		personagem[2]->atualizar();
		personagem[2]->desenhar();

		uniTerminarFrame();
	}
}