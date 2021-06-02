#include <bits/stdc++.h>
using namespace std;

int l, r, n = 0;
string s;

int main(){
  freopen("DEM.inp", "r", stdin);
  freopen("DEM.out", "w", stdout);
  cin >> l >> r;
  for(int i = l; i <= r; i++)
    s += to_string(i);
  for(int i = 0; i < 9; i++){
    n = 0;
    while(s.find(to_string(i)) != string::npos){
      s.erase(s.find(to_string(i)),1);
      n++;
    }
    cout << n << " ";
  }

  return 0;
}