#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, A[5200], lis[5200], ans = 0;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> A[i];
	}
	for(int i=0; i<N; i++){
		lis[i] = 1;
		for(int j = 0; j<i; j++){
			if(A[j] < A[i]){
				lis[i] = max(lis[i], 1+lis[j]);
			}
		}
		ans = max(ans, lis[i]);
	}
	cout << ans;
}
