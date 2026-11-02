#include <iostream>
#include <algorithm>
#include <locale.h>
void sort(int* a) {
    std::sort(a, a + 10, std::greater<int>());
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};

    sort(a);

    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }

    return 0;
}
