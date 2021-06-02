#include<bits/stdc++.h>
using namespace std;

int main(){
  string s,res;
  getline(cin,s);
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  for(int i = 0; i < s.size(); i++){
    string tg = "";
    char ch = s[i];
    int c = 0;
    while(s.find(ch) != string::npos){
      c++;
      s.erase(s.find(ch),s.find(ch)+1);
    }
    if(c>1)
      res = res + to_string(c) + ch;
    else
      res.push_back(ch);
  }
  cout << res;
  return 0;
}