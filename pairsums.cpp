#include <iostream>
#include <string>
using namespace std;

int main() {
    long long a;
    cin >> a;
    long long odd = 0;
    long long even = 0;
    while(a--){
        int t;
        cin >> t;
        if(t%2==1){
            odd++;
        }else{
            even++;
        }
    }
	cout << odd*even;
}
