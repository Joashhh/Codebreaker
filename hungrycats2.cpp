#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	vector<pair<int, bool>> arr(N);
	for(int i=0; i<N; i++){
		int a;
		cin >> a;
		arr[i] = {a, false};
	}
	sort(arr.begin(), arr.end());
	int curr = arr[0].first;
	for(int i=1; i<N; i++){
		int x = arr[i].first;
		if(arr[i-1].second){
			curr++;
		}
		if(x <= curr){
			cout << "NO";
			return 0;
		}
		curr = x;
		arr[i].second = true;
	}
	cout << "YES";
	return 0;
}
