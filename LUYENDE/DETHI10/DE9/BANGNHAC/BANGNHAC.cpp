#include<bits/stdc++.h>
#define P pair<int,int>
using namespace std;

int n;
P a[100];

void input(){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i].second;
    a[i].first = i + 1;
  }
}

bool comp(P a, P b){
  return a.second < b.second;
}

int main(){
  int t = 0, tP = 0;
  freopen("BANGNHAC.inp", "r", stdin);
  freopen("BANGNHAC.out", "w", stdout);
  input();
  sort(a, a + n, comp);

  for(int i = 0; i < n; i++){
    t += a[i].second;
    tP += t;
    cout << a[i].first << " " << t << endl;
  }
  cout << tP;
  return 0;
}