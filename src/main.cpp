#include <iostream>
#include "../include/main.h"

using namespace std;

int main() {
    int p, q;
    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    int totalDepth = 0;
    int result = S(p, q, totalDepth);

    cout << "Сума функції S(" << p << ", " << q << ") = " << result << endl;
    cout << "Загальна глибина рекурсії: " << totalDepth << endl;

    return 0;
}