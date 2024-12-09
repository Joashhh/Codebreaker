#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long a;
	cin >> a;
	unsigned long long sum = 0;
	while(a>0){
		sum += a%10;
		a /= 10;
	}
	cout << sum;
}
