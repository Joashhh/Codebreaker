#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b) {
    return a > b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end(), comp);
    cout << nums[k - 1]; 
}
