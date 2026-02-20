#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<pair<long long, long long>> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i].first >> a[i].second; 
    }
    sort(a.begin(), a.end(), [](auto &x, auto &y) {
        return x.second < y.second;
    });
    long long last_end = -1;
    int count = 0;
    for (auto &activity : a) {
        if (activity.first >= last_end) {
            count++;
            last_end = activity.second;
        }
    }
    cout << count << "\n";
}
