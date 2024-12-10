#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
	return a > b;
}
int findrank(vector<int> d, int rank){
	sort(d.begin(), d.end(), comp);
	return d[rank-1];
}
int main(){
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		int a, b, c;
		cin >> a >> b >> c;
		arr[i] = a+b+c;
	}
	int score = findrank(arr, k);
	for(int i=0; i<n; i++){
		if(arr[i] + 300 >= score){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}
