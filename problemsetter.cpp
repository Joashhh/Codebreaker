#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
        ll c, p;
        cin >> c >> p;
        vector<pair<ll ,ll>> contests;
        for(ll i=0; i<c; i++){
                ll m, s;
                cin >> m >> s;
                contests.push_back(make_pair(s, m));
        }
        sort(contests.rbegin(), contests.rend());
        vector<pair<ll, ll>> problems;
        for(ll i=0; i<p; i++){
                ll q, d;
                cin >> q >> d;
                problems.push_back(make_pair(d,q));
        }
        sort(problems.begin(), problems.end());
        ll satisfaction = 0;
		for(pair chall : problems){
				ll quality = chall.second;
				ll index = 0;
				bool notdone = true;
				while(notdone){
						if(index == c-1){
								notdone = false;
						}
						ll qualneeded = contests[index].second;
						if(quality >= qualneeded){
								ll gain = contests[index].first;
								ll loss = chall.first;
								ll net = gain-loss;
								if(net >= 0){
									satisfaction += net;
									notdone = false;
								}else{
										index++;
								}
						}else{
								index++;
						}
				}
		}
		cout << satisfaction;
		return 0;
}
