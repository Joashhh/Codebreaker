#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if(a>90){
		cout << "A*";
	}else if(a>74){
		cout << "A";
	}else if(a>59){
		cout << "B";
	}else if(a>49){
		cout << "C";
	}else if(a>34){
		cout << "D";
	}else if(a>19){
		cout << "E";
	}else{
		cout << "U";
	}
}
