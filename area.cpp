#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	long long total = 0;
	while(n--){
		long long a, b;
		cin >> a >> b;
		total += a*b;
	}
	cout << total;
}
