#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100][100];
int f[100][100] = {0};

void input (){
  cin >> n >> k;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++)
      cin >> a[i][j];
  }
}

void init(){
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++)
      f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1] + a[i][j];
  }
}

int main(){
  int s;
  int sMax = -10000;
  freopen("MTTIENTO.inp", "r", stdin);
  freopen("MTTIENTO.out", "w", stdout);
  input();
  init();
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      int u = i+k-1,v = j+k-1;
      if(u <= n && v <= n){
        s = f[u][v] - f[i-1][v] - f[u][j-1] + f[i-1][j-1];
        sMax = max(s,sMax);
      }
    }
  }
  cout << sMax;
  return 0;
}