#include <bits/stdc++.h>
using namespace std;
long long knapsack(long long W, vector<long long> weight, vector<long long> vals){
	long long n = weight.size();
	vector<vector<long long>> dp(n+1, vector<long long>(W+1));
	for(long long i=0; i<=n; i++){
		for(long long j=0; j<=W; j++){
			if(i==0 || j==0){
				dp[i][j] = 0;
			}else{
				long long pick = 0;
				if(weight[i-1] <= j){
					pick = vals[i-1] + dp[i-1][j-weight[i-1]];
				}
				long long notPick = dp[i-1][j];
				dp[i][j] = max(pick, notPick);
			}
		}
	}
	return dp[n][W];
}
int main(){
	long long N, W;
	cin >> N >> W;
	vector<long long> weight(N);
	vector<long long> vals(N);
	for(long long i=0; i<N; i++){
		cin >> weight[i] >> vals[i];
	}
	cout << knapsack(W, weight, vals);
}
