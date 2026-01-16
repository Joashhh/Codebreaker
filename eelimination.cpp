#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	vector<pair<int, int>> arr(N);
	vector<int> res(N, 0);
	stack<pair<int, int>> st;
	for(int i=0; i<N; i++){
		int a;
		cin >> a;
		arr[i] = make_pair(a, i);
	}
	for(int i=N-1; i>=0; i--){
		while(!st.empty() && (st.top()).first < arr[i].first){
			st.pop();
		}
		if(!st.empty()){
			res[i] = (st.top()).second + 1;
		}
		st.push(arr[i]);
	}
	for(int i : res){
		cout << i << " ";
	}
}
