#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin >> a;
	int count = 0;
	while(a--){
		string s;
		cin >> s;
		if(s == "chugga"){
			count++;
		}
	}
	if(count % 2 == 0){
		cout << "CHOO choo";
	}else{
		cout << "choo CHOO";
	}
}
