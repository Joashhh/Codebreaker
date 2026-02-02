#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, d, k;
	cin >> n >> d >> k;
	vector<int> arr(n+2, 0);
	while(k--){
		int l, r;
		cin >> l >> r;
		arr[max(1,l-d+1)]++;
		arr[r+1]--;
	}
	vector<int> pref(n+2);
	pref[0] = arr[0];
	for(int i=1; i<n+2; i++){
		int a = pref[i-1] + arr[i];
		if(a < 1){
			a=0;
		}
		pref[i] = a;
	}
	int answer = 0;
	int max = 0;
	for(int i=0; i<pref.size(); i++){
		if(pref[i] > max){
			answer = i;
			max = pref[i];
		}
	}
	cout << answer;
}
