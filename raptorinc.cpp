#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, k;
	cin >> n >> k;
	long long total = 0;
	while(n--){
		long long a;
		cin >> a;
		total += a;
	}
	if(total>k){
		cout << "No";
	}
	else{
		cout << "Yes";
	}
}
