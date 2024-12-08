#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N;
    int J;
    cin >> N;
    vector<int> smurfs;
    for (int i = 0; i < N; ++i) {
        int smurf;
        cin >> smurf;
        if (i % 2 == 0) {
			smurfs.push_back(smurf);
        } else {
			smurfs.insert(smurfs.begin(), smurf);
        }
        J = i;
    }
    
    if(J % 2 == 0){
        reverse(smurfs.begin(), smurfs.end());
    }
    
    for (int i = 0; i < N; ++i) {
        cout << smurfs[i] << " ";
    }
}
