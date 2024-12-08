#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,k,s,e;
	cin >> n >> k >> s >> e;
	if(abs(s-e) % k == 0){
		cout << "Yes";
		return 0;
	}
	cout << "No";
}
