#include<bits/stdc++.h>
using namespace std;

int m,n,k,l;
int a[100];

void input(){
  cin >> m >> n >> k;
  l = m*n;
  for (int i = 0; i < l; ++i)
    cin >> a[i];
}

int main(){
  freopen("TROCHOI.inp", "r", stdin);
  input();
  sort(a,a+l);
  int t = 0;
  for (int i = 0; i < l-k; ++i)
    t += a[i];

  cout << t;
  return 0;
}