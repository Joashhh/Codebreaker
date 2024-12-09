#include <bits/stdc++.h>
using namespace std;
bool pre(int x, int d){
	while(x > 0){
		if(x%10 == d){
			return true;
		}
		x /= 10;
	}
	return false;
}
int main(){
	int n,k,x;
	cin >> n >> k >> x;
	while(k--){
		if(x % 7 == 0){
			cout << "UP!" << endl;
		}else if(pre(x, 7)){
			cout << "UP!" << endl;
		}else{
			cout << x << endl;
		}
		x += n;
	}
}
