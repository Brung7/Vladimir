#include <iostream>
#include <string>;
#include "Weapon.h"
using namespace std;

struct Player {
	int id;
	string login;
	string password;
	Player(int id, string login, string password) {
		this->id = id;
		this->login = login;
		this->password = password;
	}
	

	void PlayerData() {
		cout << "ID: " << id << endl << endl << "Login: " << login << endl << endl << "Password: " << password << endl << endl;
	}
};

int MyMath::counter = 0;
int main() {
	setlocale(LC_ALL, "ru");

	Player player1(1,"Genius","sdfsfsfds");
	player1.PlayerData();



	MyMath M;
	Weapon nothing;
	Weapon gun("AK-47", 70, 10, 40, ONEHANDED);
	Characteristic Sila(10);
	cout << "Total damage = " << Sila.getDamage(&gun) << endl << endl;
	MagicWeapon wand("Wand",20,5,2,10,15);
	cout << "Name: " << wand.GetName() <<  endl << "Damage: " << wand.GetDamageM() << endl << "MaxWeight: " << wand.GetMaxweight()<<endl <<"WeaponType: " << wand.GetweaponType()<<endl<<"Weight: " << wand.Getweight()<<endl<<"AddDamage: " << wand.GetAddDamage() << endl<<endl;
	
	cout << "AK-47 Damage: " << gun.Getdamage()<<endl << "Wand Damage: " << wand.GetAddDamage() << endl;

	nothing.SetDamage(20);
	cout << "CanTake = " << gun.ifTake(10, 40) << endl<<endl;
	cout <<"SumWeight = " << gun.SumWeight(gun) << endl << endl;
	cout << "SumWeight = " << gun.SumWeight(34) << endl << endl;
	cout << gun.GetName()<<" "<<gun.Getdamage() <<" "<<gun.Getweight()<<" "<<gun.GetMaxweight()<<endl << endl;
	cout << nothing.GetName() << " " << nothing.Getdamage() << " " << nothing.Getweight() << " " << nothing.GetMaxweight() << endl << endl;
	cout <<"Class MyMath = " << M.Add(20, 10) << " " << M.Div(20, 10) << " " << M.Mult(20, 10) << " " << M.Sub(20, 10) <<endl << endl << "Counter = " << M.counter << endl << endl;

	Weapon* newWeapon = new Weapon;
	delete newWeapon;

	if (gun.GetweaponType() == ONEHANDED) {
		cout << "Одноручное оружие" << endl;
	}
	else if (gun.GetweaponType() == TWOHANDED) {
		cout << "Двуручное оружие" << endl;
	}
	else if (gun.GetweaponType() == BOW) {
		cout << "Лук" << endl;
	}
	else if (gun.GetweaponType() == CROSSBOW) {
		cout << "Арбалет" << endl;
	}

	if (gun < wand) {
		cout << "GUN<WAND";
	}
	else cout << "GUN> WAND";
}
