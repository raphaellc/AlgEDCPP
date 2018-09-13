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
	void desenhaKnight();

protected:
	int knightSTR;
	Sprite knight_spritesheet;
};

