#pragma once
#include <iostream>
#include <string>;
using namespace std;

class Weapon {
	friend class Characteristic;
private:
	string name;
	int damage;
	int weight;
	int Maxweight;
	int weaponType;
public:

	Weapon(string name, int damage, int weight, int Maxweight, int weaponType);
		
	Weapon();

	~Weapon();

	bool ifTake(int weight, int Maxweight);

	int SumWeight(Weapon& m);

	int SumWeight(int weight2);

	string GetName();

	virtual int Getdamage();

	void SetDamage(int damage);

	int Getweight();

	int GetMaxweight();
	
	int GetweaponType();
	
	virtual void attack() ;
	
	bool operator >(Weapon& otherWeapon) {
		return this->Getdamage() > otherWeapon.Getdamage();
	}
	bool operator <(Weapon& otherWeapon) {
		return this->Getdamage() < otherWeapon.Getdamage();
	}


};

enum Type {
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW,
	MAGIC
};


