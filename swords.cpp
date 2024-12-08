#include <bits/stdc++.h>

using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a;
  cin >> a;

  vector<pair<int, int>> attacks(a);

  for (int i = 0; i < a; i++) {
    int attack, defense;
    cin >> attack >> defense;
    attacks[i] = make_pair(attack, defense);
  }

  sort(attacks.begin(), attacks.end());

  int unique = 1; 
  int counter = attacks[a-1].second;

  for (int i = a - 2; i >= 0; i--) {
    if (attacks[i].second > counter) {
      unique++;
      counter = attacks[i].second;
    }
  }

  cout << unique;

  return 0;
}
