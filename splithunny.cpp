#include <bits/stdc++.h>
using namespace std;
int r, c;
vector<string> grid;
bool visited[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
void dfs(int x, int y){
	visited[x][y] = true;
	for(int d=0; d<4; d++){
		int nx = x + dx[d];
		int ny = y + dy[d];
		if(0 <= nx && nx < r && 0 <= ny && ny < c){
			if (!visited[nx][ny] && grid[nx][ny] == 'H') {
                dfs(nx, ny);
            }
		}
	}
}
int main(){
	cin >> r >> c;
	grid.resize(r);
	for(int i=0; i<r; i++){
		cin >> grid[i];
	}
	int pools = 0;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(!visited[i][j] && grid[i][j] == 'H'){
				pools++;
				dfs(i, j);
			}
		}
	}
	cout << "Oh, bother. There are " << pools << " pools of hunny.";
}
