#include <bits/stdc++.h>
using namespace std;
int N, E, K;
vector<vector<pair<int, int>>> adj;
bool canReach(int x){
	vector<int> dist(N+1, INT_MAX);
	queue<int> q;
	dist[1] = 0;
	q.push(1);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto [v, w] : adj[u]){
			if(w <= x && dist[u]+1 < dist[v]){
				dist[v] = dist[u] + 1;
				q.push(v);
			}
		}
	}
	return dist[N] <= K;
}
int main(){
	cin >> N >> E >> K;
	adj.assign(N+1, vector<pair<int, int>>());
	int u, v, w;
	int maxWi = 0;
	for(int i=0; i<E; i++){
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
		maxWi = max(w, maxWi);
	}
	int lo = 0, hi = maxWi, ans = -1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(canReach(mid)){
            ans = mid;
            hi = mid-1;
        } else {
            lo = mid+1;
        }
    }
    
    cout << ans << "\n";
}
