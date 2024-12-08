#include <bits/stdc++.h>
using namespace std;
bool third(const array<int, 3>& a, const array<int, 3>& b) {
    return a[2] < b[2];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;
    vector<array<int, 3>> score(n);
    for (int i = 0; i < n; i++) {
        cin >> score[i][0];
    }
    for (int i = 0; i < n; i++) {
        cin >> score[i][1];
    }
    for (int i = 0; i < n; i++) {
        score[i][2] = score[i][0] - score[i][1];
    }
    sort(score.begin(), score.end(), third);
    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a > 0) {
            sum += score[i][0];
            a--;
        } else {
            sum += score[i][1];
        }
    }
    cout << sum << endl;
}
