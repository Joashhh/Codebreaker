#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	long long x = 0;
	long long y = 0;
	while(a--){
		string s;
		int mag;
		cin >> s >> mag;
		if(s == "UP"){
			y += mag;
		}else if(s == "DOWN"){
			y -= mag;
		}else if(s == "LEFT"){
			x -= mag;
		}else if(s == "RIGHT"){
			x += mag;
		}
	}
	cout << x << " " << y;
}
