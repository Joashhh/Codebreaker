#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int q;
	cin >> q;
	unordered_map<int, int> amt;
	deque<int> deq;
	while(q--){
		int n;
		cin >> n;
		if(n==1){
			int a;
			cin >> a;
			amt[a]++;
			deq.push_back(a);
		}else if(n==2){
			int a = deq.back();
			amt[a]--;
			deq.pop_back();
		}else if(n==3){
			int a;
			cin >> a;
			amt[a]++;
			deq.push_front(a);
		}else if(n==4){
			int a = deq.front();
			amt[a]--;
			deq.pop_front();
		}else if(n==5){
			if(amt[0]){
				cout << 0 << endl;
			}else{
				cout << 1 << endl;
			}
		}
	}
}
