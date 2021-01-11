#include <bits/stdc++.h>
using namespace std;

int main(){

  string s;
  string s1 = "";
  string KQ = "";
  char maX;
  int vtmaX;

  getline(cin, s);

  for(int i = 0; i < s.size(); i++)
    if(s[i] >= '0' && s[i] <= '9')
      s1 = s1+ s[i];


  for(int i = 1; i <= 4; i++) {
    maX = '-1';
    for (int j = 0; j < s1.size() - 4 + i; j++) {
      if (maX < s1[j]) {
        maX = s1[j];
        vtmaX = j;
      }
    }

    KQ = KQ+ char(maX);
    s1.erase(0, vtmaX+1);
  }

  cout << KQ;
  return 0;
}