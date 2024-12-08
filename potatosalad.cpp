#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int arr[a];
	for(int i=0; i<a; i++){
		cin >> arr[i];
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	int result = 0;
	for(int i=a-1; i>(a-1-b); i--){
		result += arr[i];
	}
	cout << result;
}
