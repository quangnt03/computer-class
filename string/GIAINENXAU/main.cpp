#include <bits/stdc++.h>
using namespace std;

int toInt(string s){
  int x;
  stringstream convert(s);

  convert >> x;
  return x;
}

int main(){

  string s, result = "";
  getline(cin, s);

  while(!s.empty()){
    string number = "";

    while(s[0] >= '0' && s[0] <= '9'){
      number.push_back(s.front());
      s.erase(0,1);
    }

    int n = toInt(number);

    for (int i = 0; i < n; ++i)
      result.push_back(s[0]);

    s.erase(0,1);
  }

  cout << result;
  return 0;
}