#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    deque<char> list;
    
    while(t--){
        char a;
        cin >> a;
        
        if(a == '[' || a == '{' || a == '('){
            list.push_back(a);
        }
        else if(a == ']'){
            if(list.empty() || list.back() != '['){
                cout << "Invalid";
                return 0;
            }
            else{
                list.pop_back();
            }
        }
        else if(a == ')'){
            if(list.empty() || list.back() != '('){
                cout << "Invalid";
                return 0;
            }
            else{
                list.pop_back();
            }
        }
        else if(a == '}'){
            if(list.empty() || list.back() != '{'){
                cout << "Invalid";
                return 0;
            }
            else{
                list.pop_back();
            }
        }
    }
    
    if(list.empty()){
        cout << "Valid";
    } else {
        cout << "Invalid";
    }
    
    return 0;
}
