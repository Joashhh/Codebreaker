#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    unordered_map<int, int> freq;
    for (int x : nums) {
        freq[x]++;
    }
    int removals = 0;
    for (auto [val, count] : freq) {
        if (count < val) {
            removals += count; 
        } else {
            removals += count - val; 
		}
    }
    cout << removals;
}
