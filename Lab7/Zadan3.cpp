#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
#include <fstream>
#include <string>



#define PI 3.141592653589793

using namespace std;


int main() {
	int r;
	long double c;


	cout << "Input radius: ";
	cin >> r;
	c = 2 * PI * r;
	cout << "Length of circle : " << c << endl;
	c = round(c * 1000 ) / 1000;
	cout << "Rounded value: " << c << endl;

	fstream fs;
	string input;

	string path = "str.txt";
	fs.open(path, ios::in | ios::out | ios::app);

	if (!fs.is_open()) {
		cout << "Error opening file" << endl;
	}
	else {
		cout << "File is open!" << endl;
		while (true) {
			cout << "Enter your string:\n";
			getline(cin, input);
			if (input == "read") {
				char ch;
				while (fs.get(ch)) {
					cout << ch;

				}cout << endl;
			}
			else if (input == "erase") {
				fs.close();
				remove("str.txt");
				ofstream file("str.txt");

			}
			else if (input == "exit") {
				break;
			}
			else {
				fs << input;
			}

		}

	}
	fs.close();
}

