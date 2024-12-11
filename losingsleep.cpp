#include <bits/stdc++.h>
using namespace std;
unsigned long long findmin(unsigned long long n){
	unsigned long long minimum = LLONG_MAX;
	for(int b=0; b<=log2(n); b++){
		unsigned long long power = 1LL << b;
		unsigned long long a = n/power;
		unsigned long long c = n%power;
		minimum = min(a+b+c, minimum);
	}
	return minimum;
}
int main(){
	unsigned long long a;
	cin >> a;
	cout << findmin(a);
}
