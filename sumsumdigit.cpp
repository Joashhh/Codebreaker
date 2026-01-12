#include <bits/stdc++.h>
using namespace std;
vector<long long> sod(long long n){
	vector<long long> arr(n+1);
	int curr = 0;
	for(int i=1; i<=n; i++){
		int x = i;
		while(x != 0){
			curr += x%10;
			x /= 10;
		}
		arr[i] = curr;
	}
	return arr;
}
int main(){
	vector<long long> arr;
	arr = sod(2E5);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << arr[n] << endl;
	}
}
