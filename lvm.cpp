#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int q;
	cin >> q;
	vector<string> instruction(q);
	vector<int> arr(q, 0);
	for(int i=0; i<q; i++){
		cin >> instruction[i];
		if(instruction[i] == "PUSH" || instruction[i] == "IFZERO"){
			cin >> arr[i];
		}
	}
	stack<int> st;
	int point;
	int ip = 0;
	while(true){
		if(instruction[ip] == "PUSH"){
            st.push(arr[ip]);
            ip++;
        }else if(instruction[ip] == "STORE"){
            point = st.top();
            st.pop();
            ip++;
        }else if(instruction[ip] == "LOAD"){
            st.push(point);
            ip++;
        }else if (instruction[ip] == "PLUS") {
            int b = st.top();
			st.pop();
            int a = st.top();
			st.pop();
            st.push(a+b);
            ip++;
        }else if(instruction[ip] == "TIMES"){
            int b = st.top();
			st.pop();
            int a = st.top(); 
			st.pop();
            st.push(a*b);
            ip++;
        }else if(instruction[ip] == "IFZERO"){
            int x = st.top();
            st.pop();
            if(x == 0){
				ip = arr[ip];
			}else ip++;
        }else if(instruction[ip] == "DONE"){
            cout << st.top();
            return 0;
        }
	}
}
