#include <bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin >> q;
	multiset<int> st;
	while(q--){
		int a;
		cin >> a;
		if(a == 1){
			int op;
			cin >> op;
			st.insert(op);
		}else if(a==2){
			int op;
			cin >> op;
			auto it = st.find(op);
			st.erase(it);
		}else if(a==3){
			int op;
			cin >> op;
			auto it = st.lower_bound(op);
			if(it == st.end()){
				cout << -1 << endl;
			}else{
				cout << *it << endl;
			}
		}
	}
}
