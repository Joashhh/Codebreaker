#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, m;
    cin >> N >> m;

    int schools[m];
    for (int i = 0; i < m; i++) {
        cin >> schools[i];
    }

    sort(schools, schools + m);

    int maxSchools = 0;
    int sum = 0;

    for (int i = 0; i < m; i++) {
        sum += schools[i];
        if (sum <= N) {
            maxSchools++;
        } else {
            break;
        }
    }

    cout << maxSchools << endl;

    re
