#include<bits/stdc++.h>
using namespace std;

const int X[4] = {1,-1,0,0};
const int Y[4] = {0,0,1,-1};

int m, n;
int a[100][100];
int iMin, iMax, jMax, jMin;

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
  a[i][j] = -1;
  for(int k = 0; k < 4; k++){
    int u = i + X[k];
    int v = j + Y[k];
    if(isInside(u,v) && a[u][v] == 1){
      iMin = min(u,iMin);
      iMax = max(u,iMax);
      jMin = min(v,jMin);
      jMax = max(v,jMax);
      dfs(u,v);
    }
  }
}

bool isRetangle(){
  for(int i = iMin; i <= iMax; i++)
    for(int j = jMin; j <= jMax; j++)
      if(a[i][j] == 0)
        return false;
  return true;
}

int main(){
  int d = 0;
  
  freopen("DEMTAU.inp", "r", stdin);
  freopen("DEMTAU.out", "w", stdout);
  input();

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(a[i][j] == 1){
        iMin = i;
        iMax = i;
        jMin = j;
        jMax = j;
        dfs(i,j);
        if(isRetangle())
          d++;
      }
    }
  }
  cout << d;
  return 0;
}