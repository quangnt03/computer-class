#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;

  getline(cin, s);

  for (int i = 0; i < s.size(); i++){
    if(s[i] == ' ')
      s[i+1] = s[i+1]-32;
  }

  s[0] = s[0]-32;

  cout << s;
  return 0;
}