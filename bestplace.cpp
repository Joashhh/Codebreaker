#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int median_x = x[(n - 1) / 2];
    int median_y = y[(n - 1) / 2];
    cout << median_x << " " << median_y << endl;
}
