#include <bits/stdc++.h>
using namespace std;
bool comp(string a, string b){
	if (a.size() != b.size()){
		return a.size() < b.size();
	}
	return a < b;
}
int main(){
	int N;
	cin >> N;
	vector<string> num(N);
	for(int i=0; i<N; i++){
		cin >> num[i];
	}
	sort(num.begin(), num.end(), comp);
	for(string i : num){
		cout << i << " ";
	}
}
