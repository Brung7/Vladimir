#include<iostream>
#include<string>
#include<regex>
using namespace std;




bool isValidName(string str);
void isValidEmail(string str);

int main() {
    string name, boofer;
    cout << "Input your name: " << endl;
    cin >> name;
    if (!isValidName(name)) {
        cout << "Invalid name"<<endl;
    }

    cout << "_____________________________"<<endl;
    string emails("asffsfte 32 4br@mail.ru rewrwfdg4343 math21@gmail.com 443t yutute");

    for (int i = 0; i < emails.size(); i++) {
        if (emails[i] != ' ') {
            boofer.insert(boofer.end(), emails[i]);
        }
        else {
            isValidEmail(boofer);
            boofer.erase();
        }

    }
}


bool isValidName(string str) {
    regex reg("(?=.{2,32}$)[A-Z][A-Za-z]");
    return regex_search(str, reg);
}

void isValidEmail(string str) {
    regex reg("^[a-z0-9_][a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}$", regex_constants::icase);
    if (regex_search(str, reg)) {
        cout << str << endl;
    }
}