#pragma once
#include "libUnicornio.h"

class Human
{
public:
	Human();
	~Human();

	virtual int getWeapon();
	virtual int attack();
	void atualizar();
	void walk();
	void setSpriteSheet(std::string spritesheet);

protected:
	int weapon;
	int STR, INT;
	int px = 200, 
		py = 200;
	Sprite spr;
};

