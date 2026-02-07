#include <bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin >> q;
	priority_queue<int> pq;
	while(q--){
		int a;
		cin >> a;
		if(a==1){
			pq.pop();
		}else if(a==2){
			int x;
			cin >> x;
			pq.push(x);
		}else if(a==3){
			cout << pq.size() << endl;
		}else if(a==4){
			cout << pq.top() << endl;
		}
	}
}
