#include<bits/stdc++.h>
using namespace std;


int main(){
  freopen("TACHHDT.inp", "r", stdin);
  freopen("TACHHDT.out", "w", stdout);

  string s;

  getline(cin, s);

  while(s.find(" ") != string::npos){
    int pos = s.find(" ");
    s.replace(pos, 1, "\n");
  }

  cout << s;
  
  return 0;
}