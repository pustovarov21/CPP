#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a = 17;
    int b = 5;

    cout << "Первое число: " << a << endl;
    cout << "Второе число: " << b << endl;

    cout << "Деление нацело: " << a / b << endl;
    cout << "Остаток от деления: " << a % b << endl;

    return 0;
}
