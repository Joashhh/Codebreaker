#include <bits/stdc++.h>
using namespace std;
long long countWays(vector<long long> arr, long long v){
	vector<long long> dp(v+1, 0);
	dp[0] = 1;
	for(long long i : arr){
		for(long long j=i; j<=v; j++){
			dp[j] += dp[j-i];
		}
	}
	return dp[v];
}	
int main(){
	long long n, v;
	cin >> n >> v;
	vector<long long> arr(n);
	for(long long i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << countWays(arr, v)%13371337;
}
