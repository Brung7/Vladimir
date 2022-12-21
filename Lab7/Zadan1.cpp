#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    string uS;
    int flag = 0, length;
    cout << "Введите строку: ";
    getline(cin, uS);
    cout << uS.substr(1, 3) << endl;
    if (uS.size() < 3) {
        cout << "Длина меньше 4";
    }
    for (int i = 0; i < uS.size(); i++) {
        if (uS[i] == 'a') {
            cout << endl<<"Индекс первого вхождения строки а: " << i << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << endl << "Символа a не найдено" << endl;
    }

}
