#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int count = 0;
	while(k--){
		string s;
		cin >> s;
		if(s=="LAND"){
			count++;
		}
		if(s=="LEAVE"){
			count--;
		}
		if(s=="EVACUATE"){
			count = 0;
		}
		if(count > n){
			cout << "PLAN REJECTED" << endl;
			return 0;
		}
	}
	cout << "PLAN ACCEPTED" << endl;
}
