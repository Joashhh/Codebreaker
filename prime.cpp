#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a;
    cin >> a;
    if (a <= 1) {
        cout << "Not Prime";
        return 0;
    }
    if (a == 2) {
        cout << "Prime";
        return 0;
    }
    if (a % 2 == 0) {
        cout << "Not Prime";
        return 0;
    }
    long long max = sqrt(a);
    for (long long i = 3; i <= max; i += 2) {
        if (a % i == 0) {
            cout << "Not Prime";
            return 0;
        }
    }
    cout << "Prime";
    return 0;
}
