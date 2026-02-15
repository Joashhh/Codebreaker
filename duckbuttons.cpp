#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long n, d;
	cin >> n >> d;
	vector<long long> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	long long answer = 0;
	vector<pair<long long, long long>> ducks;
	long long max = 0;
	for(int i=n-1; i>0; i--){
		if(arr[i] > max){
			max = arr[i];
			ducks.push_back({arr[i], i});
		}
	}
	long long curr = 0;
	reverse(ducks.begin(), ducks.end());
	for(auto i : ducks){
		answer += i.first * abs(i.second - curr);
		curr = i.second;
	}
	cout << answer;
}
