#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
int main() {
    int V, E, s, e;
    cin >> V >> E >> s >> e;
    for(int i=0;i<E;i++){
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    vector<long long> dist(V+1, INF);
    dist[s] = 0;
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
    pq.push({0,s});   
    while(!pq.empty()){
        auto [d,u] = pq.top(); pq.pop();
        if(d > dist[u]){
			continue;
		}
        for(auto [v,w] : adj[u]){
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
	cout << dist[e];
}
