#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
	if(n%2==0){
		return false;
	}
	for(int i=3; i<sqrt(n); i = i+2){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int x;
	cin >> x;
	while(true){
		if(x == 2){
			cout << 2;
			return 0;
		}
		if(isprime(x)){
			cout << x;
			return 0;
		}
		x++;
	}
}
