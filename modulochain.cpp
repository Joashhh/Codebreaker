#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long arr[n];
    for(int i=0; i<n; i++){
        unsigned long long x;
        cin >> x;
        arr[i] = x % 1000000007;
    }
    long long sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        sum = sum % 1000000007;
    }
    unsigned long long prod = 1;
    prod *= arr[0];
    prod *= arr[n-1];
    prod = prod % 1000000007;
    int sum2 = 0;
    for(int i=1; i<n; i++){
        sum2 += arr[i];
        sum2 = sum2 % 1000000007;
    }
    cout << sum << " ";
    cout << prod << " ";
    int subtraction_result = (arr[0] - sum2) % 1000000007;
    if (subtraction_result < 0) {
        subtraction_result += 1000000007;
    }
    cout << subtraction_result << " ";
}
