#include<bits/stdc++.h>
using namespace std;

int n;
int a[10001*2];
int sum[10001*2];
void input(){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    a[i+n] = a[i];
  }
}

int main(){
  freopen("doanconm.inp", "r", stdin);
  freopen("doanconm.out", "w", stdout);
  input();
  int s = 0;
  sum[0] = a[0]; 
  int res = -999999999;
  for(int i = 1; i < 2*n; i++)
    sum[i] = sum[i-1]+a[i];
  for(int i = 0; i < n; i++)
    for(int j = i; j < n+i-1; j++)
      res = max(res,sum[j]-sum[i-1]);
  cout << res;
  return 0;
}