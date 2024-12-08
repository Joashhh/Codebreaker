#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int arr[t];
    for(int i=1; i<=t; i++){
        int c;
        cin >> c;
        arr[c-1] = i;
    }
    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
}
