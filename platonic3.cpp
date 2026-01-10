#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	int count = 0;
	while(N--){
		int a;
		cin >> a;
		if(a >= 10000 && a <= 99999){
			count++;
		}
	}
	cout << count;
}
