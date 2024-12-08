#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    int nop = 1;
    long long num = 2;
    while(nop<=t){
        int nod = 1;
        for(int i=1; i<=floor(sqrt(num)); i++){
            if(num%i == 0){
                nod++;
            }
        }
        if(nod==2){
            nop++;
        }
        num++;
    }
    cout << num-1;
}
