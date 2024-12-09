#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
int main(){
	ull n, d;
	cin >> n >> d;a
	vector<ull> arr(n);
	for(ull i=0; i<n; i++){
		cin >> arr[i];
	}
	long long min = 9e18;
	sort(arr.begin(), arr.end());
	for(int i=1; i<=n; i++){
		long long diff = arr[i-1] - i*d;
		if(diff < min){
			min = diff;
		}
		if(min < 0){
			cout << -1;
			return 0;
		}
	}
	cout << min;
	return 0;
}
