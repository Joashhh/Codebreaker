#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, q;
	cin >> n >> q;
	set<long long> asleep;
	while(q--){
		string s;
		cin >> s;
		if(s == "TRANSMIT"){
			long long l, r;
			cin >> l >> r;
			auto it = asleep.lower_bound(l);
			if(it != asleep.end() && *it <=r){
				cout << "NO" << endl;
			}else{
				cout << "YES" << endl;
			}
		}else if(s == "WAKE"){
			long long x;
			cin >> x;
			asleep.erase(x);
		}else if(s == "SLEEP"){
			long long x;
			cin >> x;
			asleep.insert(x);
		}
	}
}
