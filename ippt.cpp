#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if(a==0||b==0||c==0){
	    cout << "FAIL";
	    return 0;
	}
	int result = a+b+c;
	if(result < 61){
	    cout << "FAIL";
	}else if(result<75){
	    cout << "PASS";
	}else if(result < 85){
	    cout << "SILVER";
	}else{
	    cout << "GOLD";
	}
}
