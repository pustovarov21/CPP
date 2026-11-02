#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a = 10;
    double b = 5.5;
    float c = 2.5f;
    char d = 'A';

    cout << "Переменная int: " << a << endl;
    cout << "Переменная double: " << b << endl;
    cout << "Переменная float: " << c << endl;
    cout << "Переменная char: " << d << endl;

    cout << "\nСложение: " << a + b << endl;
    cout << "Вычитание: " << a - c << endl;
    cout << "Умножение: " << a * c << endl;
    cout << "Деление: " << a / b << endl;

    return 0;
}
