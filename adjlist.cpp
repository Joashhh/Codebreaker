#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, e;
	cin >> n >> e;
	vector <int> A[n];
	while(e--){
		int a, b;
		cin >> a >> b;
		A[a-1].push_back(b);
		A[b-1].push_back(a);
	}
	for(vector v : A){
		for(int i : v){
			cout << i << " ";
		}
		cout << endl;
	}
}
