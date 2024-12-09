#include <bits/stdc++.h>
using namespace std;
int kadane(vector<int> d){
	int maxSum = d[0];
	int res = d[0];
	for(int i=1; i<d.size(); i++){
		maxSum = min(maxSum + d[i], d[i]);
		res = min(maxSum, res);
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << kadane(arr);
}
