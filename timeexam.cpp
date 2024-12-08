#include <iostream>
#include <string>
using namespace std;
int main() {
	unsigned long long a;
	cin >> a;
	a = a%1440;
	int minute = a%60;
	int hour = a/60;
	if(hour<10){
	    cout << 0 << hour;
	}else{
	    cout << hour;
	}
	if(minute<10){
	    cout << 0 << minute;
	}else{
	    cout << minute;
	}
}
