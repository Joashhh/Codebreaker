#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string structure;
    cin >> structure;
    vector<string> arr(n);
    int valid_count = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    for(string s : arr) {
        if(s.length() == structure.length()) {
            bool is_valid = true;
            for(int i = 0; i < s.length(); i++) {
                if((structure[i] == 'V' && vowels.find(s[i]) == vowels.end()) || 
                   (structure[i] == 'C' && vowels.find(s[i]) != vowels.end())) {
                    is_valid = false;
                    break;
                }
            }
            if(is_valid) {
                valid_count++;
            }
        }
    }

    cout << valid_count << endl;
    return 0;
}
