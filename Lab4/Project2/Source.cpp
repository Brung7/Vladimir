#include <iostream>
#include <string>;
#include "Weapon.h"
using namespace std;



int MyMath::counter = 0;
int main() {
	setlocale(LC_ALL, "ru");

	MyMath M;

	Weapon nothing;
	//Weapon armament("Kalibr",10000,500, 400);
	//cout << armament.name << " " << armament.damage << " " << armament.weight << endl;
	Weapon gun("Pistol", 70, 10, 40);
	//cout << gun.name << " " << gun.damage << " " << gun.weight << endl;
	//Weapon melee("Sword",100,15, 65);
	//cout << melee.name << " " << melee.damage << " " << melee.weight << endl;
	Characteristic Sila(10);
	cout << "Total damage = " << Sila.getDamage(&gun) << endl << endl;
	
	

	nothing.SetDamage(20);
	cout << "CanTake = " << gun.ifTake(10, 40) << endl<<endl;
	cout <<"SumWeight = " << gun.SumWeight(gun) << endl << endl;
	cout << "SumWeight = " << gun.SumWeight(34) << endl << endl;
	cout << gun.GetName()<<" "<<gun.Getdamage() <<" "<<gun.Getweight()<<" "<<gun.GetMaxweight()<<endl << endl;
	cout << nothing.GetName() << " " << nothing.Getdamage() << " " << nothing.Getweight() << " " << nothing.GetMaxweight() << endl << endl;
	cout <<"Class MyMath = " << M.Add(20, 10) << " " << M.Div(20, 10) << " " << M.Mult(20, 10) << " " << M.Sub(20, 10) <<endl << endl << "Counter = " << M.counter << endl << endl;

	Weapon* newWeapon = new Weapon;
	delete newWeapon;



}
