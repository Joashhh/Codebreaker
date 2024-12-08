#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=1; i<=n; i++){
        int t;
        cin >> t;
        arr[t-1] = i;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
