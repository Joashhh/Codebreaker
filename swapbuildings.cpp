#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n;
	cin >> n;
	vector<long long> h(n);
	for(int i=0; i<n; i++){
		cin >> h[i];
	}
	unordered_map<long long, long long> freq;
	for(long long x : h){
		freq[x]++;
	}
	long long amt = 0;
	for(auto& [val, c] : freq){
        amt += c*(c-1)/2;
    }
	cout << (n*(n-1)/2) - amt;
}
