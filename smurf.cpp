#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N;
	cin >> N;
	vector<int> arr(N);
	vector<int> out;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	for(int i=N-1; i>=0; i-=2){
		out.push_back(arr[i]);
	}
	if(N%2 == 0){
		for(int i=0; i<N; i+=2){
			out.push_back(arr[i]);
		}
	}else{
		for(int i=1; i<N; i+=2){
			out.push_back(arr[i]);
		}
	}
	for(int i : out){
		cout << i << " ";
	}
}
