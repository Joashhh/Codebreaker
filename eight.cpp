#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	int count = 0;
	cin >> a;
	while(a--){
		unsigned long long x;
		cin >> x;
		if(x==8){
			count++;
		}
	}
	cout << count;
}
