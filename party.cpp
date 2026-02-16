#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> adj(n+1);
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<int> dist(n+1, -1);
	queue<int> q;
	dist[1] = 0;
	q.push(1);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		if(dist[u] == 2){
			continue;
		}
		for(int v : adj[u]){
			if(dist[v] == -1){
				dist[v] = dist[u] + 1;
				q.push(v);
			}
		}
	}
	int count = 0;
	for(int i=2; i<=n; i++){
		if(dist[i] != -1 && dist[i] <= 2){
			count++;
		}
	}
	cout << count;
}
