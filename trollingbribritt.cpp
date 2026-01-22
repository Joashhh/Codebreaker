#include <bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin >> q;
	vector<long long> arr;
	int front = 0;
	while(q--){
		int n;
		cin >> n;
		if(n == 1){
			int i;
			cin >> i;
			arr.push_back(i);
		}else if(n == 2){
			if(front < arr.size()){
        		front++;
			}
		}else if(n == 3){
			int i;
			cin >> i;
			if((front + i - 1) >= arr.size()){
				cout << -1 << endl;
			}else{
				cout << arr[front + i - 1] << endl;	
			}
		}
	}
}
