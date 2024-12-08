#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a;
	cin >> a;
	long long arr[a];
	for(int i=0; i<a; i++){
		cin >> arr[i];
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	int maxpeople = 0;
	if(a%2==0){
		maxpeople = a/2;
	}else if(a%2==1){
		maxpeople = (a/2)+1;
	}
	long long happiness = 0;
	long long abovezero = 0;
	for(int i=a-1; i>a-1-maxpeople; i--){
		happiness += arr[i];
		if(happiness > 0 && happiness > abovezero){
			abovezero = happiness;
		}
	}
	if(abovezero > 0){
		cout << abovezero;
	}else{
		cout << 0;
	}
}
