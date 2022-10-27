#pragma once
#include "Weapon.h"
class Characteristic {
	int strength;
public:

	Characteristic(int strength) {
		this->strength = strength;
	}
	int getDamage(Weapon* weapon) {
		return weapon->Getdamage() + strength;
	}
};