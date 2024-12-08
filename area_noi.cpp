#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int arr[a];
	for(int i=0; i<a; i++){
		int w, l;
		cin >> w >> l;
		arr[i] = w*l;
	}
	int max = 0;
	for(int i=0; i<a; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	cout << max;
}
