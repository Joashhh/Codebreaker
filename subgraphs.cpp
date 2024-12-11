#include <bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>>& adj, int s, vector<bool>& v){
	queue<int> q;
	v[s] = true;
	q.push(s);
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		for(int neighbour : adj[curr]){
			if(!v[neighbour]){
				v[neighbour] = true;
				q.push(neighbour);
			}
		}
	}
}
int disjoint(int n, int e, vector<pair<int, int>> connections){
	//create adjacency list
	vector<vector<int>> adj(n);
	for(auto edge : connections){
		int a = edge.first;
		int b = edge.second;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<bool> visited(n, false);
	int count = 0;
	//traverse all nodes
	for(int i=0; i<n; i++){
		if(!visited[i]){
			count++;
			bfs(adj, i, visited);
		}
	}
	return count;
}
int main(){
	int n, e;
	cin >> n >> e;
	vector<pair<int, int>> connections;
	for(int i=0; i<e; i++){
		int a,b;
		cin >> a >> b;
		connections.push_back({a, b});
	}
	cout << disjoint(n, e, connections);
}
