#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	for(int i=1; i<=a; i++){
		if(i%b==0 && i%c==0){
			cout << "FizzBuzz" << "\n";
		}else if(i%c == 0){
			cout << "Buzz" << "\n";
		}else if(i%b == 0){
			cout << "Fizz" << "\n";
		}else{
			cout << i << "\n";
		}
	}
}
