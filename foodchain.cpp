#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	unsigned long long a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	a = a%(1000000009);
	b = b%(1000000009);
	c = c%(1000000009);
	d = d%(1000000009);
	e = e%(1000000009);
	unsigned long long result = (a*b)%1000000009;
	result = (result*c)%1000000009;
	result = (result*d)%1000000009;
	result = (result*e)%1000000009;
	cout << result;
}
