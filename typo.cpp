#include <bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	if(a==b){
		cout << "Yes";
		return 0;
	}
	vector<int> mismatched;
	for(int i = 0; i<a.length(); i++){
		if(a[i] != b[i]){
			mismatched.push_back(i);
		}
	}
	if(mismatched.size() == 2){
	    if(abs(mismatched[0]-mismatched[1]) != 1){
	        cout << "No";
	        return 0;
	    }
		int i = mismatched[0], j = mismatched[1];
        if(a[i] == b[j] && a[j] == b[i]){
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
}
