#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
    return a > b;
}
int main(){
	int N;
	cin >> N;
	long long sum = 0;
	vector<int> incr(N);
	for(int i=0; i<N; i++){
		int a;
		cin >> a;
		sum += a;
	}
	for(int i=0; i<N; i++){
		cin >> incr[i];
	}
	sort(incr.begin(), incr.end(), comp);
	for(int i=0; i<N; i++){
		sum += i*incr[i];
	}
	cout << sum;
}
