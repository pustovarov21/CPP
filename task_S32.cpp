#include <iostream>
#include <cstring>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char str[256];

    cout << "¬ведите строку: ";
    cin.getline(str, 256);

    char* p = str;

    for (int i = 0; i < strlen(str); i++) {
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) {
            (*p)++;
        }
        p++;
    }

    cout << "–езультат: " << str << endl;

    return 0;
}
