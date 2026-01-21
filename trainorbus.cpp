#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	int total = 0;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		cin >> b[i];
	}
	for(int i=0; i<n; i++){
		total += min(a[i], b[i]);
	}
	cout << total;
}
