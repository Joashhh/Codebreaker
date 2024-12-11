#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	vector<int> arr(a);
	int sum = 0;
	for(int i=0; i<a; i++){
		int n;
		cin >> n;
		arr[i] = n;
		sum += n;
	}
	int meet = round((double)sum/a);
	int annoyance = 0;
	for(int i : arr){
		annoyance += (i-meet)*(i-meet);
	}
	cout << annoyance << endl;
}
