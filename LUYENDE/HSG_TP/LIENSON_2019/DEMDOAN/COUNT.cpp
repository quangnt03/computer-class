#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[100];

void input(){
  cin >> n >> m;
  for(int i = 0; i < n; i++)
    cin >> a[i];
}

int main(){
  int res = 0;
  freopen("COUNT.inp", "r", stdin);
  freopen("COUNT.out", "w", stdout);
  input();
  for(int i = 0; i < n; i++){
    if(a[i] >= m)
      res++;
    int acc = a[i];
    for(int j = i + 1; j < n; j++){
      acc += a[j];
      if(acc >= m)
        res++;
    }
  }
  cout << res;
  return 0;
}