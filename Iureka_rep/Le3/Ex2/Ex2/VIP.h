
#pragma once
#include "Ingresso.h"
class VIP :
	public Ingresso
{
public:
	VIP();
	~VIP();
	void getImprimeLocal();

protected:
	std::string localizacao;
};

