#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  bool prefix[256];

  memset(prefix, false, sizeof(prefix));

  getline(cin, s);

  transform(s.begin(), s.end(), s.begin(), ::tolower);

  int n = 0;
  for(int i = 0; i < s.size(); i++){
    if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) 
          && prefix[int(s[i])] == false){
      n++;
      prefix[int(s[i])] = true;
    }
  }

  cout << n;
  return 0;
}