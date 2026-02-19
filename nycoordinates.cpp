#include <bits/stdc++.h>
using namespace std;
long long dis(pair<long long, long long> a, pair<long long, long long> b){
	return (a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second);
}
int main(){
	int N, L;
	cin >> N >> L;
	vector<pair<long long, long long>> beds;
	for(long long i=0; i<N; i++){
		long long a, b;
		cin >> a >> b;
		beds.push_back({a, b});
	}
	long long answer = 0;
	long long L2 = 1LL * L * L;
	for(long long i=1; i<N; i++){
		for(long long j=0; j<i; j++){
			if((dis(beds[i], beds[j])) <= L2){
				answer++;
			}
		}
	}
	cout << answer;
}
