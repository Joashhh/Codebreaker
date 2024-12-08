#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, d;
    cin >> n >> d;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size);
    for(int i=0; i<d; i++){
        arr[n-1]++;
    }  
    unsigned long long sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i]*arr[i];
    }
    cout << sum;
}
