#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin >> n;
	int arr[n];
	for(int i=1; i<=n; i++){
		int a;
		cin >> a;
		arr[a-1] = i;
	}
	for(int i : arr){
		cout << i << " ";
	}
}
