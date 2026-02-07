#include <bits/stdc++.h>
using namespace std;
int main(){
	int C, R;
	cin >> C >> R;
	C--;
	R--;
	unsigned long long a = 1;
	for(int i=0; i<R; i++){
		a *= (C - i);
        a /= (i + 1);
	}
	cout << a;
}
