#include <bits/stdc++.h>
using namespace std;
vector<int> divsum(int limit){
	vector<int> sum(limit+1, 1);
	sum[0] = 0;
	for(int i=2; i<=limit; i++){
		for(int j=i; j<=limit; j+=i){
			sum[j] += i;
		}	
	}
	return sum;
}
vector<int> maxsum(vector<int> d){
	int n = d.size();
	vector<int> max(n);
	int maxSum = 0;
	for(int i=0; i<=n; i++){
		if(d[i] > maxSum){
			maxSum = d[i];
		}
		max[i] = maxSum;
	}
	return max;
}
int main(){
	int n;
	cin >> n;
	vector<int> div = divsum(1000000);
	vector<int> max = maxsum(div);
	while(n--){
		int k;
		cin >> k;
		cout << max[k] << endl;
	}
}
