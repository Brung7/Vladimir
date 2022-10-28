#include "Errors.h"
#include <iostream>
using namespace std;


Errors::Errors(int id) {
	if (id == LESSER)
		cout << "I don't belive it \n" << endl;
	else if (id == MORE)
		cout << "You haven't been born yet \n" << endl;
	else if (id == NEGATIVE)
		cout << "You entered negative number \n" << endl;
	else if (id == NORMAL)
		cout << "Thank you ! \n" << endl;
}