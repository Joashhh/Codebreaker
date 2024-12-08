#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    if ((b1 < a1 && c1 < a1 && b2 < a2 && c2 < a2) ||
        (b1 < a1 && c1 < a1 && b2 > a2 && c2 > a2) ||
        (b1 > a1 && c1 > a1 && b2 < a2 && c2 < a2) ||
        (b1 > a1 && c1 > a1 && b2 > a2 && c2 > a2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}
