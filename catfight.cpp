#include <bits/stdc++.h>
using namespace std;
int fight(vector<int> arr, int q){
	int l = 0;
	long long sum = 0;
	int length = 0;
	for(int r=0; r<arr.size(); r++){
		sum += arr[r];
		while(sum > q && l <= r){
			sum -= arr[l];
			l++;
		}
		length = max(length, r-l+1);
	}
	return length;
}
int main(){
	int n, q;
	cin >> n >> q;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << fight(arr, q);
}
