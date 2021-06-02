#include <bits/stdc++.h>
#define Pii pair<int,int>
using namespace std;

int n;
Pii s[7];

void input(){
  cin >> n;
  for (int i = 0; i < n; ++i)
    cin >> s[i].first >> s[i].second;
}

int main(){
  int L, R, sMax;

  freopen("Bai2.inp", "r", stdin);
  freopen("Bai2.out", "w", stdout);

  input();

  sort(s,s+n);
  L=s[0].first;
  R=s[0].second;
  sMax = R-L+1;

  for (int i = 0; i < n; ++i) {
    if (s[i].first <= R)
      R = s[i].second;
    else{
      L=s[i].first;
      R=s[i].second;
    }
    sMax = max(sMax, R-L);
  }
  cout << sMax;
  return 0;
}