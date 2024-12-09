#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	cin >> a >> b;
	string arr[a];
	for(int i=0; i<a; i++){
		cin >> arr[i];
	}
	cout << arr[b%a];
}
