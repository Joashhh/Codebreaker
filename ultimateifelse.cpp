#include <iostream>
#include <string>
using namespace std;
int main() {
	int a;
	string s;
	cin >> a >> s;
	if(a==1){
	    cout << "one";
	    return 0;
	}else if(a==9){
	    cout << 9;
	    return 0;
	}else if(s=="hello"){
	    cout << "world";
	    return 0;
	}else if(s=="world" && a==3){
	    cout << "andss";
	    return 0;
	}else if(s=="hmm" || a==20){
	    cout << "sus";
	    return 0;
	}else if(s.length() > 5){
	    cout << "long";
	    return 0;
	}else if(s.length() == a){
	    cout << "equal";
	    return 0;
	}else if(a%2==0){
	    cout << "222222222222222222222";
	    return 0;
	}else{
	    cout << "clown";
	}
}
