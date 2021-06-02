#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int a[3];
  int d = 1;

  freopen("tile.inp", "r", stdin);
  freopen("tile.out", "w", stdout);

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  sort(a,a+n, greater<int>());

  int acc = 1;
  for (int i = n-2; i >= 0; --i) {
    a[i] -= acc;
    acc++;
  }

  for (int i = 0; i < n-1; ++i) {
    if (a[i] < 0)
      break;
    else
      d++;
  }
  
  cout << d;

  return 0;
}