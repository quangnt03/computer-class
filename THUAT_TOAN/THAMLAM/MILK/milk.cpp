#include <bits/stdc++.h>
#define P pair<int,int>
using namespace std;


int main(){
  freopen("milk.inp", "r", stdin);
  freopen("milk.out", "w", stdout);

  P a[100];
  int n,m;
  int t = 0;
  cin >> n >> m;
  for (int i = 0; i < m; ++i)
    cin >> a[i].first >> a[i].second;

  sort(a, a+m);

  for (int i = 0; i < m; ++i) {
    if(n >= a[i].second){
      n -= a[i].second;
      t += a[i].first*a[i].second;
    }
    else{
      while(n > 0){
        n--;
        t += a[i].first;
      }
      break;
    }
  }
  cout << t;
  return 0;
}