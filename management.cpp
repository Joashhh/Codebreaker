#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		arr[i] = 0;
	}
	while(n>1){
		int a;
		cin >> a;
		arr[a-1]++;
		n--;
	}
	for(int i : arr){
		cout << i << endl;
	}
}
