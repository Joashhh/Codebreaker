#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q, x;
    cin >> n >> q >> x;
    vector<long long> arr(n);
    long long sum = 0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i]<x) {
            sum += (x - arr[i]);
        }
    }
    while(q--) {
        int a;
        long long b;
        cin >> a >> b;
        a--;
        if (arr[a]<x) {
            sum -= (x - arr[a]);
        }
        arr[a] = b;
        if (arr[a]<x) {
            sum += (x - arr[a]);
        }
        cout << sum << endl;
    }
}
