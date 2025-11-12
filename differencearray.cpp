#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long N, U;
	cin >> N >> U;
	vector<long long> arr(N);
	vector<long long> diff(N, 0);
	for(long long i=0; i<N; i++){
		cin >> arr[i];
	}
	for(long long i=0; i<U; i++){
		long long l, r, a;
		cin >> l >> r >> a;
		l--;
		r--;
		diff[l] += a;
		if(r+1 < N){
			diff[r+1] += -a;
		}
	}
	for(long long i=1; i<N; i++){
		diff[i] += diff[i-1];
	}
	for(long long i=0; i<N; i++){
		cout << arr[i]+diff[i] << " ";
	}
}
