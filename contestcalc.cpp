#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
	int a; 
	cin >> a;
	unordered_map <string, int> totals;
	for(int i=0; i<a; i++){
		string person;
		int score;
		cin >> person >> score;
		totals[person] = score;
	}
	int amt;
	cin >> amt;
	int sum = 0;
	for(int i=0; i<amt; i++){
		string target;
		cin >> target;
		if(totals.find(target) != totals.end()){
			sum += totals[target];
		}
	}
	cout << sum/amt;
}
