#include <bits/stdc++.h>
using namespace std;

struct duong{int k, h, m;};

int n;
duong a[100];

void input(){
  cin >> n;
  for (int i = 0; i < n-1; ++i)
    cin >> a[i].k >> a[i].h >> a[i].m;
}



int main(){
  freopen("ODA.inp", "r", stdin);
  input();
  return 0;
}