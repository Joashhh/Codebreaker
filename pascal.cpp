#include <iostream>
using namespace std;

int coeff(int n, int k) {
    if (k == 0 || k == n) return 1;
    return coeff(n - 1, k - 1) + coeff(n - 1, k);
}

int number(int R, int C) {
    return coeff(R - 1, C - 1);
}
int main() {
    int R, C;
    cin >> R >> C;

    cout << number(R, C) << endl;
}
