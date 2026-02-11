#include <bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin >> q;
	set<long long> st;
	long long add = 0;
	while(q--){
		long long op, inst;
		cin >> op >> inst;
		if(op == 1){
			auto it = st.find(inst-add);
			if(it != st.end()){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;
			}
		}else if(op == 2){
			st.insert(inst-add);
		}else if(op == 3){
			add += inst;
		}
	}
}
