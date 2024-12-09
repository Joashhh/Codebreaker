#include <bits/stdc++.h>
using namespace std;
unsigned long long reverse(unsigned long long a){
	unsigned long long num = 0;
	while(a > 0){
		num = num * 10 + a % 10;
		a /= 10;
	}
	return num;
}
int main(){
	unsigned long long a, b;
	cin >> a >> b;
	for(unsigned long long i=a; i<=b; i++){
		unsigned long long rev = reverse(i);
		if(i==rev){
			cout << "Palindrome!" << endl;
		}else{
			cout << i << endl;
		}
	}
}
