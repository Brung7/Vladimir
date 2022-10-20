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

class MyMath {
	
public:
	static int counter;
	static int Add(int x, int y) {
		counter++;
		return x + y;
	}
	static int Sub(int x, int y) {
		counter++;
		return x - y;
	}
	static int Mult(int x, int y) {
		return x * y;
	}
	static int Div(int x, int y) {
		counter++;
		return x / y;
	}

	

};

class MagicWeapon:public Weapon {
	int additionalDamage;
public:
	MagicWeapon(string name, int damage, int weight, int weaponType, int Maxweight, int additionalDamage) : Weapon(name, damage, weight, Maxweight, weaponType) {
		this->additionalDamage = additionalDamage;
	}
	MagicWeapon() :MagicWeapon::MagicWeapon("default", 0, 0, 0, 0, 0){}

	int GetAddDamage() {
		return additionalDamage;
	}
	int GetDamageM() {
		return GetAddDamage() + Weapon::Getdamage();
	}
};