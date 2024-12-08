#include <iostream>
using namespace std;
bool canmake(int n){
    if(n%11==0){
        return true;
    }
    for(int i=0; i<=n/111; i++){
        int check = n-(111*i);
        if(check%11==0){
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if(canmake(a)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
