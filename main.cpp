#include <iostream>
using namespace std;

int f(int n, int& depth) {
    depth++;
    if (n == 0) {
        return 0;
    }
    if (n % 10 > 0) {
        return n % 10;
    } else {
        return f(n / 10, depth);
    }
}

int S(int p, int q, int& totalDepth) {
    int sum = 0;
    for (int i = p; i <= q; i++) {
        int depth = 0;
        sum += f(i, depth);
        totalDepth += depth;
    }
    return sum;
}

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