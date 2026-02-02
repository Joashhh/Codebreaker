#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int q;
	cin >> q;
	int questions = 0;
	deque<long long> odd_q, even_q;
	long long odd_sum = 0, even_sum = 0;
	while(q--){
		char a;
		cin >> a;
		if(a == 'S'){
			long long x;
			cin >> x;
			questions++;
			if(questions%2 == 0){
				even_q.push_back(x);
				even_sum += x;
			}else{
				odd_q.push_back(x);
				odd_sum += x;
			}
		}else{
			if(!odd_q.empty()){
                odd_sum -= odd_q.front();
                odd_q.pop_front();
            }
			questions--;
			swap(odd_sum, even_sum);
			swap(odd_q, even_q);
		}
		cout << even_sum << endl;
	}
}
