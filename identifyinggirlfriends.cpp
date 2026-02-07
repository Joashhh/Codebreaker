#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, q;
	cin >> n >> q;
	map<string, string> names;
	map<string, string> inverted;
	while(n--){
		string s, a;
		cin >> s >> a;
		names.insert({s, a});
		inverted.insert({a, s});
	}
	while(q--){
		int a;
		cin >> a;
		if(a==1){
			string name;
			cin >> name;
			cout << names[name] << endl;
		}else{
			string name;
			cin >> name;
			cout << inverted[name] << endl;
		}
	}
}
