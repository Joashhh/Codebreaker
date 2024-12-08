#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a;
	cin >> a;
	int arr[a];
	for(int i=0; i<a; i++){
	    cin >> arr[i];
	}
	int n= sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	for(int i=a-1; i>=0; i--){
	    cout << arr[i] << " ";
	}
}
