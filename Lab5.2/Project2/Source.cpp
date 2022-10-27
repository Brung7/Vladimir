#include <iostream>
#include <string>;
#include "Weapon.h"
#include "OneTimeWeapon.h"
#include "Hands.h"
#include "MagicWeapon.h"
#include "Characteristic.h"
#include "MyMath.h"

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
int main() {
	setlocale(LC_ALL, "ru");

	Player player1(1,"Genius","sdfsfsfds");
	player1.PlayerData();
	Weapon gun("AK-47", 70, 10, 40, TWOHANDED);
	Characteristic Sila(10);
	

	MagicWeapon wand("Wand",20,5,ONEHANDED,10,15);
	cout << "Name: " << wand.GetName() <<  endl<< "Based Damage: "<< wand.Getdamage() << endl << "Total Damage: " << wand.GetDamageM() << endl << "MaxWeight: " << wand.GetMaxweight() << endl << "WeaponType: " << wand.GetweaponType() << endl << "Weight: " << wand.Getweight() << endl << "AddDamage: " << wand.GetAddDamage() << endl << endl;
	cout << "AK-47 Damage: " << gun.Getdamage()<<endl<< endl;
	cout << "AK-47 Total damage = " << Sila.getDamage(&gun) << endl << endl;

	if (gun.GetweaponType() == ONEHANDED) {
		cout << "Одноручное оружие" << endl << endl;
	}
	else if (gun.GetweaponType() == TWOHANDED) {
		cout << "Двуручное оружие" << endl<<endl;
	}
	else if (gun.GetweaponType() == BOW) {
		cout << "Лук" << endl << endl;
	}
	else if (gun.GetweaponType() == CROSSBOW) {
		cout << "Арбалет" << endl << endl;
	}

	if (gun < wand) {
		cout << "GUN<WAND"<<endl << endl;
	}
	else cout << "GUN> WAND"<<endl << endl;

	
	OneTimeWeapon H;
	wand.attack();
	H.attack();
	H.attack();
	
	Hand<OneTimeWeapon, int>  playerHands(H, 12);
	playerHands.getType().attack();
	cout <<"Hand: " << playerHands.getType2() << endl <<endl;
}
