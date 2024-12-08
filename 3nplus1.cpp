#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	while(a != 1){
		cout << a << " ";
		if(a%2 == 0){
			a = a/2;
		}else{
			a = 3*a+1;
		}
	}
	cout << a << " ";
}
