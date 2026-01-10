#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, M;
	cin >> N >> M;
	long long count = 0;
	int curr = 1;
	for(int i=0; i<M; i++){
		int a;
		cin >> a;
		count += abs(a-curr);
		curr = a;
	}
	cout << count + abs(curr-N);
}
