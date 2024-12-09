#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long check = n;
	long long sum = 0;
	while(n--){
		int a;
		cin >> a;
		sum += a;
		if(a < 5){
			cout << "No";
			return 0;
		}
	}
	if(sum >= 8*check){
		cout << "Yes";
	}else{
		cout << "No";
	}
}
