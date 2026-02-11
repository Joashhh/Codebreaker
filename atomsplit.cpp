#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, t;
	cin >> n >> t;
	long long power = 0;
	priority_queue<long long> pq;
	for(int i=0; i<n; i++){
		long long a;
		cin >> a;
		pq.push(a);
	}
	while(t--){
		long long curr = pq.top();
		pq.pop();
    	pq.push(curr/2);
    	pq.push(curr/2);
		power += curr;
	}
	cout << power;
}
