#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<unsigned long long> coins = {1000000, 500000, 100000, 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1};
	unsigned long long a;
	cin >> a;
	unsigned long long count = 0;
	for(unsigned long long i : coins){
		count += a/i;
		a = a%i;
	}
	cout << count;
}
