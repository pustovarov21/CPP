#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int A, B;

    cout << "¬ведите A: ";
    cin >> A;

    cout << "¬ведите B (B > A): ";
    cin >> B;

    if (B <= A) {
        cout << "ќшибка: B должно быть больше A!" << endl;
        return 0;
    }

    ofstream file("output.txt");

    for (int i = A; i <= B; i++) {
        file << i * 3 << endl;
    }

    file.close();

    cout << "–езультаты записаны в файл output.txt" << endl;

    return 0;
}
