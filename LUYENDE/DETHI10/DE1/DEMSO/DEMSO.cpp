#include <bits/stdc++.h>
using namespace std;

int main(){
  ifstream fi("DEMSO.inp");
  ofstream fo("DEMSO.out");

  int a[10];
  int n = 0;
  memset(a, 0, sizeof(a));

  while(!fi.eof()){
    int x;
    fi >> x;
    a[x]++;
  }

  for (int i = 0; i < 9; ++i) {
    if(a[i] == 1)
      n++;
  }
  fo << n;
  return 0;
}