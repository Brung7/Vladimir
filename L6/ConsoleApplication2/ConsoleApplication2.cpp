#include "Errors.h"

#include <iostream>
using namespace std;

int main()
{
	int number, year;
	cout << "Input namber 1,2 or 3"<<endl;

	try
	{
		cin >> number;
		if (number != 1 && number != 2 && number != 3)
			throw("Incorrect number \n" );
	}
	catch (const char*e)
	{
		cout << e;
	}
	cout << "Input year of your birthday ";
	try
	{
		cin >> year;
		if (year < 1850 && year >= 0)
			throw (Errors(Errors::LESSER));
		else if (year > 2022)
			throw(Errors(Errors::MORE));
		else if (year < 0)
			throw(Errors(Errors::NEGATIVE));
		else
			throw(Errors(Errors::NORMAL));
	}
	catch (...){}
}


