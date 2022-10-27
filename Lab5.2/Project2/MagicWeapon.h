#pragma once
class MagicWeapon :public Weapon {
	int additionalDamage;
public:
	MagicWeapon(string name, int damage, int weight, int weaponType, int Maxweight, int additionalDamage) : Weapon(name, damage, weight, Maxweight, weaponType) {
		this->additionalDamage = additionalDamage;
	}
	MagicWeapon() :MagicWeapon::MagicWeapon("default", 0, 0, 0, 0, 0) {}

	int GetAddDamage() {
		return additionalDamage;
	}
	int GetDamageM() {
		return GetAddDamage() + Weapon::Getdamage();
	}
	void attack() override{
		cout << "Àòàêóåì ìàãè÷åñêèì îðóæèåì" << endl;;
	}
};
