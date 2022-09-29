// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>
using namespace std;

void foo(int a = 3) {
    int g = 5;
    int s = 10;
    for (int i = 0; i < a; i++) {
        cout <<"Переменная из цикла = " << g << endl;
        cout << "Переменная из цикла = "<< s << endl;
    }
}
int Aeyrwbz(int a, int b, int& c, int& d) {
    int s = a + b;
    int multi = a * b;
    c = s;
    d = multi;
    return 0;
}

int function(int x = 1) {
int sum = (1 + x) * x / 2;
    if (x > 0) {
        
        cout<< "Сумма через функцию при x>0 = " << sum << endl;
    }
    
    else if (x<=0) {
        cout<<"При x < 0 = " << 0 << endl;
    }
    return 0;
}
int main()
{
    int s =0, multi = 0;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int sum = 0;
    
    int array[2][3] = {{1,2,3},{4,5,6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += array[i][j];
        }
    }
    cout << "Сумма элементов = " << sum << endl;
    int mas[3];
    for (int j = 0; j < 3; j++) {
        int stolb = 0;
        for (int i = 0; i < 2; i++) {
            stolb += array[i][j];
            mas[j] = stolb;
            
        }
       cout <<"Сумма столбца = " << mas[j] << endl;
    }
    float f = 20.84;
    float& k = f;
    float& j = f;
    k = 21.84;
    cout << f << endl << k <<endl << j << endl;
    function();
    Aeyrwbz(2, 3, s, multi);
    cout << "Сумма через ссылки = "<< s << endl << "Произведение через ссылки = "<< multi << endl;
    foo();
}


