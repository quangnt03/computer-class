#include<bits/stdc++.h>
using namespace std;

int toInt(string s){
  stringstream convert(s);
  int n;
  convert >> n;
  return n;
}

int main(){
  freopen("TINHTONG.inp", "r", stdin);
  freopen("TINHTONG.out", "w", stdout);

  int acc = 0;
  int i = 0;
  
  string s;

  getline(cin, s);

  while(i < s.length()){
    if(s[i] >= '0' && s[i] <= '9'){
      string n = "";
      n.push_back(s[i]);

      int j = i+1;

      while(s[j] >= '0' && s[j] <= '9'){
        n.push_back(s[j]);
        j++;
      }
      i = j;

      acc += toInt(n);
    }
    i++;
  }

  cout << acc;
  return 0;
}