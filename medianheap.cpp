#include <bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin >> q;
	priority_queue<int> left; //max heap
	priority_queue<int, vector<int>, greater<int>> right; //min heap
	while(q--){
		string cmd;
		cin >> cmd;
		if(cmd == "PUSH"){
			int x;
			cin >> x;
			if(left.empty() || x <= left.top()){
    			left.push(x);
			}else{
    			right.push(x);
			}
			if(left.size() > right.size() + 1){
    			right.push(left.top());
    			left.pop();
			}
			else if(right.size() > left.size()){
    			left.push(right.top());
				right.pop();
			}
		}else{
			left.pop();
			if(left.size() < right.size()){
        		left.push(right.top());
        		right.pop();
    		}
		}
	}
	vector<int> vals;
    while(!left.empty()){
        vals.push_back(left.top());
        left.pop();
    }
    while(!right.empty()){
        vals.push_back(right.top());
        right.pop();
    }
    sort(vals.begin(), vals.end());
    for(int x : vals){
        cout << x << " ";
    }
}
