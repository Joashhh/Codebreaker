#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	bool a = false;
	bool b = false;
	bool c = false;
	for(int i=1; i<=n; i++){
		char x;
		cin >> x;
		if(x=='A'){
			a = true;
		}
		if(x=='B'){
			b = true;
		}
		if(x=='C'){
			c = true;
		}
		if(a&&b&&c){
			cout << i;
			return 0;
		}
	}
}
