#include "CarregadorDeAssets.h"
#include <Global.h>


CarregadorDeAssets::CarregadorDeAssets()
{
}


CarregadorDeAssets::~CarregadorDeAssets()
{
}

bool CarregadorDeAssets::carregarRecursos(std::fstream & f_arq_recursos)
{

	bool b_status_carregamento = true;
	std::string s_tipo_asset;
	std::string s_nome_asset;
	std::string s_caminho_asset;
	std::string s_num_anim_asset;
	std::string s_num_max_frames_asset;
	std::string::size_type sz;

	if (f_arq_recursos) {

		char c_num_ass = f_arq_recursos.get(); 
		this->i_num_assets = c_num_ass - '0'; // conversão de char para inteiro

		while (!f_arq_recursos.eof()) {
			f_arq_recursos >> s_tipo_asset // passa as informações para o stream
				           >> s_nome_asset 
				           >> s_caminho_asset 
				           >> s_num_anim_asset 
				           >> s_num_max_frames_asset;
			if (!f_arq_recursos.fail()) {
				if (s_tipo_asset == "sprite_sheet") { 
					gRecursos.carregarSpriteSheet(s_nome_asset, 
						                          s_caminho_asset, 
						                          std::stoi(s_num_anim_asset, &sz),
						                          std::stoi(s_num_max_frames_asset, &sz), 
						                          QUALIDADE_ESCALA_BAIXA); // &sz = parâmetro de tamanho da string
				}
				if (!gRecursos.carregouSpriteSheet(s_nome_asset)) {
					gDebug.erro("Não carregou recurso");
					return false;
				}
			}
		}
		return true;
	}
}
