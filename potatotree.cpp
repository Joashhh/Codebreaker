#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, q;
	cin >> n >> q;
	unordered_set<int> st;
	vector<int> amt(n);
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		st.insert(a);
		amt[i] = st.size();
	}
	while(q--){
		int op;
		cin >> op;
		cout << amt[op-1] << endl;
	}
}
