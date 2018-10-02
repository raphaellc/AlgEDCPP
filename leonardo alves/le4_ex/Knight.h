#pragma once
#include "Human.h"
class Knight :
	public Human
{
public:
	Knight();
	~Knight();

	int getWeapon() override;
	int attack() override;

protected:
	int knightSTR;
};

