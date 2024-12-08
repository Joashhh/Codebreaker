#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<string> words;
	while(n--){
		string word;
		cin >> word;
		words.push_back(word);
	}
	for(int i=1; i<words.size(); i++){
		int j=i;
		while(j>0 && words[j-1].length() < words[j].length()){
			swap(words[j], words[j-1]);
			j--;
		}
	}
	for(string i : words){
		cout << i << endl;
	}
}
