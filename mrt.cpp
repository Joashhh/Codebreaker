#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e15;
int main(){
	int n, e, q;
	cin >> n >> e >> q;
	vector<vector<long long>> dist(n, vector<long long>(n, INF));
	for(int i=0; i<n; i++){
		dist[i][i] = 0;
	}
	while(e--){
		int x, y, t;
		cin >> x >> y >> t;
		dist[x][y] = min(dist[x][y], (long long)t);
        dist[y][x] = min(dist[y][x], (long long)t); 
	}
	for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dist[i][k] < INF && dist[k][j] < INF){
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}
            }
        }
    }
    for(int i=0;i<q;i++){
      	int a, b;
        cin >> a >> b;
        if(dist[a][b] >= INF){
			cout << -1 << endl;
		}
        else{
			cout << dist[a][b] << endl;
		}
    }
}
