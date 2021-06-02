#include<bits/stdc++.h>
using namespace std;

const int X[4] = {-1,1,0,0};
const int Y[4] = {0,0,-1,1};

int m,n;
int a[100][100];
int s = 0;
int sMax = -1;

void input(){
  cin >> m >> n;
  for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j];
}

bool isInside(int i, int j){
  return i >= 0 && i < m && j >= 0 && j < n;
}

void dfs(int i, int j){
  s += a[i][j];
  a[i][j] = 0;
  for(int k = 0; k < 4; k++){
    int u = i + X[k], v = j + Y[k];
    if(isInside(u,v) && a[u][v] != 0)
      dfs(u,v);
  }
}

int main(){
  freopen("DEMVUNG.inp", "r", stdin);
  freopen("DEMVUNG.out", "w", stdout);
  input();
  int d = 0;

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(a[i][j] != 0){
        d++;
        s = 0;
        dfs(i,j);
        sMax = max(s,sMax);
      }
    }
  }
  cout << d << endl << sMax;
  return 0;
}