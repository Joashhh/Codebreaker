#include <bits/stdc++.h>
using namespace std;
int main(){
	int X, Y, Mx, My;
	cin >> X >> Y >> Mx >> My;
	vector<string> grid(Y);
	for(int i=0; i<Y; i++){
		cin >> grid[i];
	}
	int start_x = Mx - 1;
    int start_y = Y - My;
	vector<vector<int>> dist(Y, vector<int>(X, -1));
	queue<pair<int, int>> q;
	dist[start_y][start_x] = 0;
	q.push({start_y, start_x});
	int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};
	int answer = 0;
	while(!q.empty()){
		auto [y, x] = q.front();
		q.pop();
		answer = max(answer, dist[y][x]);
		for(int d=0; d<8; d++){
			int nx = x + dx[d];
			int ny = y + dy[d];
			if(nx >= 0 && ny >= 0 && nx < X && ny < Y){
				if(grid[ny][nx] == '.' && dist[ny][nx] == -1){
					dist[ny][nx] = dist[y][x] + 1;
					q.push({ny, nx});
				}
			}
		}
	}
	cout << answer;
}
