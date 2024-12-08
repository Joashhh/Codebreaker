#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	long long arr[a];
	int k;
	cin >> k;
	long long max = 0;
	for(int i=0; i<a; i++){
		long long t;
		cin >> t;
		arr[i] = t;
	}
	for(int i=0; i<(a-k+1); i++){
		long long sum = 0;
		for(int j=0; j<k; j++){
			sum += arr[j+i];
		}
		if(sum > max){
			max = sum;
		}
	}
	cout << max;
}
