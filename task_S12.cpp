#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int i = 0;
    int sum = 0;

    while (i <= 1000) {
        if (i % 7 == 0) {
            sum += i;
        }
        i += 4;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
