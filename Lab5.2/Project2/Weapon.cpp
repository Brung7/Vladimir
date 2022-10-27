#include "Weapon.h"

Weapon::Weapon(string name, int damage, int weight, int Maxweight, int weaponType) :name(name), damage(damage), weight(weight), Maxweight(Maxweight),weaponType(weaponType) {}

Weapon::Weapon() : Weapon::Weapon("default", 0, 0, 0, 0) {}


Weapon::~Weapon() {

	//cout << "Диструктор сработал" << endl;
	//cout <<"Name: " << name << " " << "Damage: "<<damage << " " << "Weight: " << weight << endl;

}

	bool Weapon:: ifTake(int weight, int Maxweight){
		if (weight <= Maxweight) {
			return true;
		}
		else return false;
	}
	int Weapon:: SumWeight(Weapon & m) {
		return SumWeight(m.weight);
	}
	int Weapon:: SumWeight(int weight2) {
		return weight + weight2;
	}
	string Weapon:: GetName() {
		return name;
	}
	int Weapon:: Getdamage() {
		return damage;
	}
	int Weapon:: Getweight() {
		return weight;
	}
	int Weapon:: GetMaxweight() {
		return Maxweight;
	}
	void Weapon::SetDamage(int damage) {
		this->damage = damage;
	}
	int Weapon::GetweaponType() {
		return weaponType;
	}

	void Weapon::attack()
	{

	}
	

