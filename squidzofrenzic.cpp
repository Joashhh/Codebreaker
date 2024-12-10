#include <bits/stdc++.h>
using namespace std;
bool possible(int mid, vector<int> d, int m){
	int curr = 0;
	int box = 1;
	for(int i : d){
		if(curr + i > mid){
			curr = 0;
			box++;
			if(box > m){
				return false;
			}
		}
		curr += i;
	}
	return true;
}
int main(){
	int n, m;
	cin >> n >> m;
	vector<int> arr(n);
	int high = 0;
	int low = 0;
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		high += a;
		low = max(a, low);
		arr[i] = a;
	}
	int result = high;
	while(low <= high){
		int mid = (low+high)/2;
		if(possible(mid, arr, m)){
			result = mid;
			high = mid-1;
		}else{
			low = mid + 1;
		}
	}
	cout << result;
}
