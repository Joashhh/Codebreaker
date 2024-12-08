#include <iostream>
using namespace std;
int main(){
	int n, x, y;
	cin >> n >> x >> y;
	int total = 0;
	int max = y/x;
	while(n--){
		int a;
		cin >> a;
		if(a>max){
			total += y;
		}else{
			total += a*x;
		}
	}
	cout << total;
}
