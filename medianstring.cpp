#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	if(n%2==1){
		cout << arr[(n-1)/2];
	}else{
		float a = arr[n/2];
		float b = arr[n/2 - 1];
		cout << (a+b)/2;
	}
}	
