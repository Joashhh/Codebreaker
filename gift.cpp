#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int timings[n];
    for(int i = 0; i < n; i++) {
        cin >> timings[i];
    }
    
    int gifts = 0;
    for(int i = 0; i < (n - 1); i++) {
        if (timings[i] - timings[i + 1] >= k) {
            gifts++;
        }
    }
    
    cout << gifts << endl;
    return 0;
}
