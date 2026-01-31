#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pref[i + 1] = pref[i] + arr[i];
    }
    long long totalSum = pref[n];
    while (q--) {
        long long l, r;
        cin >> l >> r;
        long long len = r - l + 1;
        long long full = len / n;
        long long rem  = len % n;
        long long start = l % n;
        long long ans = full * totalSum;
        if (rem) {
            if (start + rem <= n) {
                ans += pref[start + rem] - pref[start];
            } else {
                ans += pref[n] - pref[start];
                ans += pref[(start + rem) % n];
            }
        }
        cout << ans;
    }
}
