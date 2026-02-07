#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<long long> arr;
	arr.push_back(0);
	int q;
	cin >> q;
	long long curr = 0;
	while(q--){
		long long op, x;
		cin >> op >> x;
		if(op == 1){
			curr = x;
			arr.push_back(x);
		}else{
			if(x <= arr.size()){
				cout << arr[arr.size()-x] << endl;
			}else{
				cout << 0 << endl;
			}
			arr.push_back(curr);
		}
	}
	cout << arr.back();
}
