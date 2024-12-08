#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int arrsize, queries;
    cin >> arrsize >> queries;
    vector<long long> numbers;
    long long sum = 0;
    while (arrsize--) {
        long long number;
        cin >> number;
        sum += number;
        numbers.push_back(sum);
	}
    while (queries--) {
        int start, end;
        cin >> start >> end;
        if (start == 1) {
            cout << numbers[end - 1] << endl;
        } else {
            cout << numbers[end - 1] - numbers[start - 2] << endl;
        }
    }

}
