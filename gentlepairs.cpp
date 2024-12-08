#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    vector<pair<int, int>> arr(a);
    vector<float> gradients;
    for(int i = 0; i < a; i++) {
        int x, y;
        cin >> x >> y;
        arr[i] = make_pair(x, y);
    }

    for(int i = 0; i < a - 1; i++) {
        for(int j = i + 1; j < a; j++) {
            pair<int, int> p1 = arr[i];
            pair<int, int> p2 = arr[j];
            if (p1.first != p2.first) {
                float gradient = (float)(p1.second - p2.second) / (p1.first - p2.first);
                gradients.push_back(gradient);
            }
        }
    }
    int amt = 0;
    for(float g : gradients) {
        if(g >= -1 && g <= 1) {
            amt++;
        }
    }
    cout << amt;
}
