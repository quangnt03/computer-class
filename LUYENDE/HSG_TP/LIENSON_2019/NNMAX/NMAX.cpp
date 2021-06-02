#include<bits/stdc++.h>
using namespace std;

int main(){
  freopen("NMAX.inp", "r", stdin);
  freopen("NMAX.out", "w", stdout);

  string s;
  getline(cin, s);
  for(int i = 0; i < s.size(); i++){
    while(!(int(s[i]) >= 48 && int(s[i]) <= 57))
      s.erase(i,1);
  }

  for (int i = 0; i < 5; ++i) {
    int k = i;
    for (int j = i; j < s.length()+i-5; ++j) {
      if(s[k] < s[j])
        k = j;
      s.erase(i, k - i);
    }
  }

  s.erase(0,1);
  cout << s;
  return 0;
}