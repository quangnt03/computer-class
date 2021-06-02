#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

pii dragons[100];


int main(){
  int s, n;
  int d = 0;

  freopen("dragon.inp", "r", stdin);
  freopen("dragon.out", "w", stdout);

  cin >> s >> n;

  for (int i = 0; i < n; ++i) {
    cin >> dragons[i].first >> dragons[i].second;
  }

  sort(dragons, dragons+n);

  for(int i = 0; i < n; ++i){
    if(s >= dragons[i].first) {
      s += dragons[i].second;
      d++;
    }
  }
  if(d == n)
    cout << "YES";
  else
    cout << "NO\n" << n-d;

}