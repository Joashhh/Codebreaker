#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	long long counter = 0;
	for(int i=1; i<=a; i++){
	    counter += b/i;
	}
	cout << counter;
}
