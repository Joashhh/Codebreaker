#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b, a%b);
}
int main(){
	int n;
	cin >> n;
	while(n--){
		unsigned long long a,b;
		cin >> a >> b;
		cout << (a*b) / (gcd(a,b)) << endl;
	}
}
