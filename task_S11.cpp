#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
