#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[100];
  int n;
  int s = 0;

  freopen("Milk2.INP", "r", stdin);
  freopen("Milk2.OUT", "w", stdout);

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  sort(a, a+n, greater<int>());

  for (int i = 0; i < n; ++i)
    s += max(0, a[i] - i);

  cout << s;
  return 0;
}