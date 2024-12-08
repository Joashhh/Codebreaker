#include <iostream>
using namespace std;

int threeNplus1(int number, int iter) {
    iter--;
    while (iter--) {
        if (number % 2 == 1) {
            number = number * 3 + 1;
        } else {
            number /= 2;
        }
        if (number == 1) {
            return -1;
        }
    }
    return number;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << threeNplus1(a,b);
}
