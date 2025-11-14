#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	deque<char> seq;
	while(n--){
		string s;
		cin >> s;
		if(s == "ADD_BACK"){
			char a;
			cin >> a;
			seq.push_back(a);
		}
		if(s == "ADD_FRONT"){
			char a;
			cin >> a;
			seq.push_front(a);
		}
		if(s == "SNIP_FRONT"){
			int a;
			cin >> a;
			seq.erase(seq.begin(), seq.begin()+a+1);
		}
		if(s == "SNIP_BACK"){
			int a;
			cin >> a;
			seq.erase(seq.begin()+a+1, seq.end());
		}
		if(s == "QUERY"){
			int a;
			cin >> a;
			cout << seq.at(a) << endl;
		}
	}
}
