#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int q;
	cin >> q;
	unordered_map<string, int> st;
	unordered_map<int, int> rev;
	while(q--){
		int x;
		cin >> x;
		if(x == 1){
			string s; int n;
			cin >> s >> n;
			if(st.count(s)){
				int old = st[s];
				rev[old]--;
			}
			st[s] = n;
			rev[n]++;
		}else{
			int n;
			cin >> n;
			cout << rev[n] << endl;
		}
	}
}
