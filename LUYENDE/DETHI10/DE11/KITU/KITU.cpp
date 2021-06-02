#include<bits/stdc++.h>
using namespace std;

int main(){
  freopen("KITU.inp", "r", stdin);
  freopen("KITU.out", "w", stdout);
  string s;
  getline(cin,s);
  s += " ";
  while(s.find(" em ") != string::npos){
    int pos = s.find(" em ");
    s.replace(pos, 4," anh ");
  }
  while(s.find("Em ") != string::npos){
    int pos = s.find("Em ");
    s.replace(pos, 3, "Anh ");
  }
  s.erase(s.length()-1, 1);

  cout << s;
  return 0;
}