#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long b;
	cin >> b;
	int count = 0;
	while(b>0){
		count += b & 1;
		b >>= 1;
	}
	cout << count;
}
