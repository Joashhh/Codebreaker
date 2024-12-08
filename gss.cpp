#include <bits/stdc++.h>
using namespace std;
bool comp (int a, int b) {
  return a > b;
}
int main(){
	int n;
	cin >> n;
	unsigned long long arr[n];
	for(int i=0; i<n; i++){
		unsigned long long price;
		cin >> price;
		arr[i] = price;
	}
	n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n, comp);
	int price = 0;
	for(int i=0; i<n; i++){
		if((i+1)%4 != 0){
			price += arr[i];
		}
	}
	cout << price;
}
