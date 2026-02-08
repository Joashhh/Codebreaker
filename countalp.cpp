#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n; 
    string s;
	cin >> s;
	int freq[26] = {};
	for(char c : s){
		if(c >= 'a'  && c <= 'z'){
			freq[c - 'a']++;
		}
	}
	for(int i=0; i<26; i++){
		char c = 'a' + i;
		cout << c << " " << freq[i] << endl;
	}
}
