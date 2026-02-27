#include <bits/stdc++.h>
using namespace std;
int main(){
	int R, C, D, K;
	cin >> R >> C >> D >> K;
	vector<pair<int, int>> mushrooms;
	vector<vector<int>> grid(R, vector<int>(C, 0));
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			char a;
			cin >> a;
			if(a=='S'){
				grid[i][j] = 1;
			}else if(a=='M'){
				mushrooms.push_back({i,j});
			}
		}
	}
	vector<vector<int>> pref(R, vector<int>(C, 0));
	for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            pref[i][j] = grid[i][j];
            if(i>0) {
                pref[i][j] += pref[i - 1][j];
            }
            if(j>0) {
                pref[i][j] += pref[i][j - 1];
            }
            if(i>0 && j>0) {
                pref[i][j] -= pref[i - 1][j - 1];
            }
        }
    }
	int water = 0;
	for(auto i : mushrooms){
		int r = i.first;
        int c = i.second;
        int r1 = max(0, r - D);
        int r2 = min(R - 1, r + D);
        int c1 = max(0, c - D);
        int c2 = min(C - 1, c + D);
        int count = pref[r2][c2];
        if(r1 > 0)
            count -= pref[r1 - 1][c2];
        if(c1 > 0)
            count -= pref[r2][c1 - 1];
        if(r1 > 0 && c1 > 0)
            count += pref[r1 - 1][c1 - 1];
        if(count >= K){
			water++;
        }
	}
	cout << water;
}
