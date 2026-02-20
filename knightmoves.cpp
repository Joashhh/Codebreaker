#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int kx, ky;
	cin >> kx >> ky;
	int px, py;
	cin >> px >> py;
	int t;
	cin >> t;
	vector<vector<bool>> forbidden(n+1, vector<bool>(n+1, false));
	while(t--){
		int x, y;
		cin >> x >> y;
		forbidden[x][y] = true;
	}
	vector<vector<bool>> visited(n+1, vector<bool>(n+1, false));
	vector<int> dx = {-2,-1,1,2,2,1,-1,-2};
	vector<int> dy = {1,2,2,1,-1,-2,-2,-1};
	queue<tuple<int, int, int>> q;
	q.push({kx, ky, 0});
	int answer = -1;
	visited[kx][ky] = true;
	while(!q.empty()){
		auto [x,y,w] = q.front();
		q.pop();
		if(x == px && y == py){
			answer = w;
			break;
		}
		for(int i=0; i<8; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx >= 1 && nx <= n && ny >= 1 && ny <= n && !visited[nx][ny] && !forbidden[nx][ny]){
				visited[nx][ny] = true;
				q.push({nx, ny, w+1});
			}
		}
	}
	cout << answer;
}
