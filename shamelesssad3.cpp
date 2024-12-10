#include <bits/stdc++.h>
using namespace std;
vector<long long> prevsmall(vector<long long> d){
	int n = d.size();
	vector<long long> prevS(n, -1);
	stack<long long> st;
	for(int i=0; i<n; i++){
		while(!st.empty() && d[i] < d[st.top()]){
			st.pop();
		}
		if(!st.empty()){
			prevS[i] = st.top();
		}
		st.push(i);
	}
	return prevS;
}
vector<long long> nextsmall(vector<long long> d){
	int n = d.size();
	vector<long long> nextS(n, n);
	stack<long long> st;
	for(int i=0; i<n; i++){
		while(!st.empty() && d[i] < d[st.top()]){
			nextS[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	return nextS;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<long long> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	vector<long long> prev = prevsmall(arr);
	vector<long long> next = nextsmall(arr);
	long long max = 0;
	for(int i=0; i<n; i++){
		long long area = (next[i] - prev[i] - 1)*(arr[i]);
		if(area > max){
			max = area;
		}
	}
	cout << max;
}
