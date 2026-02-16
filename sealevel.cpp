#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	vector<vector<pair<int, long long>>> adj(N+1);
	for(int i=1; i<N; i++){
		int a, b;
		long long h;
		cin >> a >> b >> h;
		adj[a].push_back({b, h});
		adj[b].push_back({a, -h});
	}
	vector<long long> height(N+1, LLONG_MAX);
	queue<int> q;
	height[1] = 0;
	q.push(1);
	while(!q.empty()){
		int u = q.front();
		q.pop();
	
		for(auto [v,w] : adj[u]){
			if(height[v] == LLONG_MAX){
				height[v] = height[u] + w;
				q.push(v);
			}
		}
	}
	int Q;
	cin >> Q;
	while(Q--){
		int a, b;
		cin >> a >> b;
		cout << height[b] - height[a] << endl;
	}
}
