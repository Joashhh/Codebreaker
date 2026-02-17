#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	long long K;
	cin >> N >> K;
	priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<>> pq;
	for(int i=0; i<N; i++){
		long long a, b;
		cin >> a >> b;
		pq.push({a, b});
	}
	unsigned long long answer = 0;
	for(int i=0; i<K; i++){
		auto [val, inc] = pq.top();
		pq.pop();
		answer += val;
		pq.push({val + inc, inc});
	}
	cout << answer;
}
