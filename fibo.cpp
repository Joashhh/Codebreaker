#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> arr = {0, 1};
	for(int i=2; i<=200000; i++){
		arr.push_back((arr[i-1]+arr[i-2])%998244353);
	}
	int N;
	cin >> N;
	for(int i=0; i<=N; i++){
		cout << arr[i] << endl;
	}
}
