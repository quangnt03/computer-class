#include<bits/stdc++.h>
using namespace std;

const int X[4] = {1,2,2,1},
          Y[4] = {-2,-1,1,2};

int a[100][100];
int m, n;
int s;

void input(){
  cin >> m >> n;
  for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];
}

bool isInside(int x, int y){
  return (x >= 0 && x < m && y >= 0 && y < n);
}

void loang(int x, int y){
  for (int k = 0; k < 4; k++){
    int u = x + X[k], v = y + Y[k];
    if(isInside(u,v)){
      s += a[u][v];
      if(u == m)
        break;
      else
        loang(u,v);
    }
  }
}


int main(){
  freopen("TONGMA.inp", "r", stdin);
  freopen("TONGMA.out", "w", stdout);
  
  input();

  int sMax = -1000;

  for (int j = 0; j < n; ++j){
    s = a[0][j];
    loang(0,j);
    sMax = max(s,sMax);
  }

  cout << sMax;
  return 0;
}