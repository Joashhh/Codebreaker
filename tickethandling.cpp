#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	deque<int> type2;
	deque<int> type1;
	while(n--){
		int a;
		cin >> a;
		if(a==1){
			int b, c;
			cin >> b >> c;
			if(b==2){
				type2.push_back(c);	
			}
			else{
				type1.push_back(c);
			}
		}else{
			if(!type2.empty()){
				cout << type2.front() << endl;
				type2.pop_front();
			}else if(!type1.empty()){
				cout << type1.front() << endl;
				type1.pop_front();
			}
			else{
			    cout << -1 << endl;
			}
		}
	}
}
