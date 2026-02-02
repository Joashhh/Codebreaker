#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<long long> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	long long count = 0;
	for(int i=0; i<n-1; i++){
		count += abs(arr[i+1]-arr[i]);
		if(arr[i+1] < arr[i]){
			arr[0] += arr[i+1] - arr[i];
		}
	}
	cout << count+abs(arr[0]);
}
