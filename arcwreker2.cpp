#include <bits/stdc++.h>
using namespace std;
int main(){
	long long N;
	cin >> N;
	vector<long long> arr(N+1);
	arr[0] = 0;
	long long curr = 0;
	for(long long i=1; i<N+1; i++){
		long long a;
		cin >> a;
		if(i%2 == 0){
			curr -= a;
		}else{
			curr += a;
		}
		arr[i] = curr;
	}
	map<long long, long long> count;
	for(long long i : arr){
		count[i]++;
	}
	long long ans = 0;
	for(auto i : count){
		ans += ((i.second)*(i.second - 1))/2;
	}
	cout << ans;
}
