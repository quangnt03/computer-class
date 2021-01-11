#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  string result = "";

  int n = 0;

  getline(cin, s);

  for(int i=0; i < s.size(); i++){
    char cChar = s[i];
    while(s.find(cChar) != string::npos){
      n++;
      int pos = s.find(cChar);
      s.erase(pos,1);
    }
    result += to_string(n);
    result.push_back(cChar);

    n=0;
  }

  cout << result;
  return 0;
}