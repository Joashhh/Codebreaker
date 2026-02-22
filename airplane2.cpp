#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ll h, w, k;
	cin >> h >> w >> k;
	vector<ll> arr(k);
	map<ll, ll> rowsandseats;
	for(ll i=0; i<k; i++){
		ll column;
		cin >> column;
		arr[i] = column;
		rowsandseats[column]++;
	}
	if(k > h+w){
		cout << -1;
		return 0;
	}
	for(auto i : rowsandseats){
		if(i.second > h){
			cout << -1;
			return 0;
		}
	}
	sort(arr.begin(), arr.end());
	auto can = [&](ll a){
		ll row = 1;
		for(ll i=1; i<k; i++){
			ll col_gap = arr[i] - arr[i-1];
			ll need;
			if(col_gap == 0){
				need = max(1LL , a - col_gap);
			}else{
				if(col_gap < a){
					need = a - col_gap;
				}else{
					need = 0;
				}
			}
			row += need;
			if(row > h){
				return false;
			}
		}
		return true;
	};
	ll lo = 0; ll high = h+w; ll ans = -1;
	while(lo <= high){
		ll mid = (high+lo)/2;
		if(can(mid)){
			ans = mid;
			lo = mid+1;
		}else{
			high = mid-1;
		}
	}
	cout << ans;
}
