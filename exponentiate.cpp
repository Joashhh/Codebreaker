#include <iostream>
using namespace std;

long long mod_pow(long long base, long long exp, long long mod) {
    if (mod == 1) return 0;
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long a, b, m;
        cin >> a >> b >> m;
        long long result = mod_pow(a, b, m);
        cout << result << endl;
    }

    return 0;
}

