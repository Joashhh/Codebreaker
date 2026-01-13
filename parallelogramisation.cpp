#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long n;
	cin >> n;
	deque<long long> d1;
	while(n--){
		int a;
		cin >> a;
		if(a == 1){
			long long k;
			cin >> k;
			d1.push_back(k);
		}
		if(a == 2){
			d1.pop_back();
		}
		if(a == 3){
			long long k = d1.front();
			cout << k << endl;
			d1.pop_front();
		}
	}
}
