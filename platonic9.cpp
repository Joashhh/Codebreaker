#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	if(k%2 == 0){
		for(int i: arr){
			cout << i << " ";
		}
	}else{
		for(int i=n-1; i>=0; i--){
			cout << arr[i] << " ";
		}
	}
}
