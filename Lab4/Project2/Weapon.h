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
public:

	Weapon(string name, int damage, int weight, int Maxweight);
		
	Weapon();

	~Weapon();

	bool ifTake(int weight, int Maxweight);

	int SumWeight(Weapon& m);

	int SumWeight(int weight2);

	string GetName();

	int Getdamage();

	void SetDamage(int damage);

	int Getweight();

	int GetMaxweight();
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