#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, w;
    cin >> h >> w;
    int arr[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> arr[i][j];
        }
    }
    for (int n = 1; n < h * w; n++) {
        bool found = false;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (arr[i][j] == n) {
                    found = true;
                    bool hasNeighbor = false;
                    if (j + 1 < w && arr[i][j + 1] == n + 1) hasNeighbor = true; 
                    if (i + 1 < h && arr[i + 1][j] == n + 1) hasNeighbor = true; 
                    if (j - 1 >= 0 && arr[i][j - 1] == n + 1) hasNeighbor = true;
                    if (i - 1 >= 0 && arr[i - 1][j] == n + 1) hasNeighbor = true; 
                    if (!hasNeighbor) {
                        cout << "NO";
                        return 0;
                    }
                }
            }
        }
        if (!found) {
            cout << "NO";
            return 0;
        }
    }
  
    cout << "YES";
    return 0;
}
