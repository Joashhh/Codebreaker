#include <bits/stdc++.h>
using namespace std;
bool comp(long long a, long long b){
	return a > b;
}
int main(){
	int N, K;
	cin >> N >> K;
	vector<long long> arr(N);
	for(long long i=0; i<N; i++){
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end(), comp);
	long long sum = 0;
	for(long long i=(K-1); i<N; i+=K){
		if(arr[i] > 0){
			sum += arr[i];
		}
	}
	cout << sum;
}
