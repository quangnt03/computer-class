#include <bits/stdc++.h>
using namespace std;

int main(){
  freopen("MARK.inp", "r", stdin);
  freopen("MARK.out", "w", stdout);

  string s;
  int score = 0;
  int bonus = 0;

  getline(cin, s);

  for (int i = 0; i < s.length(); ++i) {
    if(s[i] == 'C')
      bonus++;
    else
      bonus = 0;
    score += bonus;
  }
  cout << score;
}