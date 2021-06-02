#include<bits/stdc++.h>
using namespace std;

int n;
int a[10001*2];
int f[10001*2];

void input(){
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
    a[i+n] = a[i];
  }
}

int main(){
  freopen("VONGSO.inp", "r", stdin);
  freopen("VONGSO.out", "w", stdout);
  input();
  
  int jMax;
  int MAX = -999999999;

  f[1] = 1; 
  for(int i = 2; i <= 2*n; i++){
    if(a[i] > a[i-1])
      f[i] = f[i-1] + 1;
    else
      f[i] = 1;
  }
  
  for(int i = 1; i <= n; i++)
    for(int j = i + 1; j <= n + i - 1; j++)
      for(int k = i; k <= j; k++)
      if(MAX < f[k]){
        MAX = f[k];
        jMax = j;
      }

  for(int i = jMax-MAX+1; i <= jMax; i++)
    cout << a[i] << " ";

  return 0;
}