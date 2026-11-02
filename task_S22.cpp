#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    ifstream file("output.txt");

    if (!file.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 0;
    }

    int number;
    int n = 1;

    while (file >> number) {
        cout << n << ". " << number << endl;
        n++;
    }

    file.close();

    return 0;
}
