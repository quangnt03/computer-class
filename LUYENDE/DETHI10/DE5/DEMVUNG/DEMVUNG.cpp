#include <bits/stdc++.h>
using namespace std;

const int X[4] = {-1,0,0,1};
const int Y[4] = {0,-1,1,0};

int n,m;
int a[100][100];

bool isPrime(int x){
  if(x < 2)
    return false;
  for (int i = 2; i*i <= x; ++i) {
    if(x % i == 0)
      return false;
  }
  return true;
}

void input(){
  cin >> m >> n;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> a[i][j];
      if(isPrime(a[i][j]))
        a[i][j] = 1;
      else
        a[i][j] = 0;
    }
  }
}

void dfs(int x, int y){
  a[x][y] = 0;
  for (int i = 0; i < 4; ++i) {
    int u = x + X[i];
    int v = y + Y[i];
    if(a[u][v] == 1)
      dfs(u,v);
  }
}

int main(){
  freopen("DEMVUNG.inp", "r", stdin);
  freopen("DEMVUNG.out", "w", stdout);

  int res = 0;
  input();

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (a[i][j] == 1){
        res++;
        dfs(i,j);
      }
    }
  }

  cout << res;
  return 0;
}