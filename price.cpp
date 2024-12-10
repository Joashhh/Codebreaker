#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b){
	return a.second > b.second;
}
int main(){
	int n;
	cin >> n;
	vector<int> p(n);
	vector<int> k(n);
	for(int i=0; i<n; i++){
		cin >> p[i];
	}
	for(int i=0; i<n; i++){
		cin >> k[i];
	}
	vector<pair<int, int>> price(n);
	for(int i=0; i<n; i++){
		price[i] = make_pair(p[i], k[i]);
	}
	sort(price.begin(), price.end(), comp);
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += price[i].first + i*price[i].second;
	}
	cout << sum;
}
