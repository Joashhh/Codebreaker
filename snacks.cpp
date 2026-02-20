#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, q;
	cin >> n >> q;
	map<long long, long long> arr;
	long long sum = 0;
	for(int i=0; i<n; i++){
		long long a;
		cin >> a;
		arr[a]++;
		sum += a;
	}
	cout << sum << endl;
	while(q--){
		long long l, r, x;
		cin >> l >> r >> x;
		auto it = arr.lower_bound(l);
		long long removedcount = 0;
		long long removedsum = 0;
		vector<long long> erase;
		while(it != arr.end() && it->first<=r){
			removedcount += it->second;
			removedsum += it->first*it->second;
            erase.push_back(it->first);
            it++;
		}
		for(long long i : erase){
			arr.erase(i);
		}
		if(removedcount > 0){
			arr[x] += removedcount;
			sum = sum - removedsum + removedcount*x;
		}
		cout << sum << endl;
	}
}
