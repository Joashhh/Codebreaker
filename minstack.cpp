#include <bits/stdc++.h>
#include "minstack.h"
using namespace std;

stack<int> st, mn;

void push(int X) {
	st.push(X);
	if(mn.empty()){
		mn.push(X);
	}else{
		mn.push(min(X, mn.top()));
	}
}

void pop() {
	st.pop();
	mn.pop();
}

int top() {
	return st.top();
}

int getMin() {
	return mn.top();
}

