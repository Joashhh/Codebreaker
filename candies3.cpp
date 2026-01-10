#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		int total = a/b;
		int wrappers = a/b;
		while(wrappers >= c){
			int add = wrappers/c;
			total += add;
			wrappers -= c*(wrappers/c);
			wrappers += add;
		}
		cout << total << endl;
	}
}
