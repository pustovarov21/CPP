#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string numbers[10] = {
        "Ноль", "Один", "Два", "Три", "Четыре",
        "Пять", "Шесть", "Семь", "Восемь", "Девять"
    };

    int n;

    cout << "Введите число от 0 до 9: ";
    cin >> n;

    if (n >= 0 && n <= 9) {
        cout << "Название числа: " << numbers[n] << endl;
    }
    else {
        cout << "Ошибка! Введите число от 0 до 9." << endl;
    }

    return 0;
}
