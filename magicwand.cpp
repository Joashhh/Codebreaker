#include <bits/stdc++.h>
using namespace std;
int main(){
	int H, W, X, Y, T;
	cin >> H >> W >> X >> Y >> T;
	vector<vector<int>> pic(H, vector<int>(W));
	vector<vector<bool>> vis(H, vector<bool>(W, false));
	for(int i=0; i<H; i++){
		for(int j=0; j<W; j++){
			cin >> pic[i][j];
		}
	}
	int sx = X-1; int sy = Y-1;
	queue<pair<int, int>> q;
	int start = pic[sx][sy];
	vis[sx][sy] = true;
	q.push({sx, sy});
	int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
	while(!q.empty()){
		auto [x, y] = q.front();
		q.pop();
		for(int d=0; d<4; d++){
			int nx = x + dx[d];
			int ny = y + dy[d];
			if (nx >= 0 && nx < H && ny >= 0 && ny < W) {
                if (!vis[nx][ny] &&
                    abs(pic[nx][ny] - start) <= T) {

                    vis[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
		}
	}
	 for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << (vis[i][j] ? '1' : '0');
        }
        cout << '\n';
    }
}
