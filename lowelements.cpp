#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int min = 3e5;
	int count = 0;
	while(n--){
		int a;
		cin >> a;
		if(a<min){
			min = a;
			count++;
		}
	}
	cout << count;
}
