#include <bits/stdc++.h>
using namespace std;

string s;

bool validate(){
  bool alpha = false;
  bool lower = false;
  bool upper = false;

  for (int i = 0; i < s.length(); ++i) {
    if(int(s[i]) >= int('0') && int(s[i]) <= int('9'))
      alpha = true;
    if(int(s[i]) >= 65 && int(s[i]) <= 90)
      upper = true;
    if(int(s[i]) >= 97 && int(s[i]) <= 122)
      lower = true;
  }
  return alpha && upper && lower;
}

int main(){
  freopen("MK.inp", "r", stdin);
  freopen("MK.out", "w", stdout);
  getline(cin, s);
//
  if(validate())
    cout << "CO";
  else
    cout << -1;
  return 0;
}