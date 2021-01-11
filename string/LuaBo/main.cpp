#include <bits/stdc++.h>
using namespace std;


int getCharCode(char c){
  int charCode = (int) c;
  return charCode;
}

int main() {
  int prefix[128];
  string s; 

  memset(prefix, 0, sizeof(prefix));

  getline(cin, s);

  for (int i = 0; i < s.size(); ++i) {
    if(s[i] != ' ')
      prefix[getCharCode(s[i])]++;
  }
  
  for(int i = 0; i < 128; i++){
    if(prefix[i] != 0){
      char c = (char) i;
      cout << c << "\t" << prefix[i] << endl;
    }
  }

  return 0;
}
