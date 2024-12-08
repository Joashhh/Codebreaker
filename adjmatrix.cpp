#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int arr[n][n];
	int e;
	cin >> e;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			arr[i][j] = 0;
		}
	}
	while(e--){
		int a, b;
		cin >> a >> b;
		arr[a-1][b-1] = 1;
		arr[b-1][a-1] = 1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
}
