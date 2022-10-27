#pragma once
#include "Weapon.h"
class OneTimeWeapon : public Weapon {
	bool flag = false;

public:
	void attack() override {
		if (flag) {
			cout << "Weapon has been used" << endl;
		}
		else {
			cout << "Attack with OneTimeWeapon" << endl;
			flag = true;
		}
	}


};