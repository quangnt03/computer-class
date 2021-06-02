#include<bits/stdc++.h>
#define N_CHAR 256
using namespace std;

int main(){
  freopen("KYTU.inp", "r", stdin);
  freopen("KYTU.out", "w", stdout);

  int prefix[N_CHAR] = {0};
  string s;
  getline(cin, s);

  for(int i = 0; i < s.size(); i++)
    prefix[(int)s[i]]++;

  for(int i = 0; i < N_CHAR; i++){
    if(prefix[i] != 0)
      cout << char(i) << " " << prefix[i] << endl;
  }
  return 0;
}