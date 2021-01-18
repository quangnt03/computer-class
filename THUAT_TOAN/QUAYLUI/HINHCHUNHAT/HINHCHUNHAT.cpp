/*Cho ma trận m hàng, n cột, đếm HCN*/

#include <bits/stdc++.h>
#define INFTY 100000000
using namespace std;

const int X[4] = {-1,1,0,0};
const int Y[4] = {0,0,-1,1};

int xMin, xMax;
int yMin, yMax;

int a[100][100];
int m, n;

void input(){
  cin >> m >> n;
  for (int i = 0; i < m; ++i)
    for(int j = 0; j < n; j++)
      cin >> a[i][j];
}

bool isInside(int x, int y){
  return (x >= 0 && x < m && y >= 0 && y < n);
}

void loang(int x, int y){
  a[x][y]=-1;
  for(int k = 0; k < 4; k++){
    int u = x + X[k], v = y + Y[k];
    if(a[u][v] == 1 && isInside(u,v)){
      xMin = min(xMin, u);
      xMax = max(xMax, u);
      yMin = min(yMin, v);
      yMax = max(yMax, v);
      loang(u,v);
    }
  }
}

bool KT(int x1, int x2, int y1, int y2){
  for (int i = x1; i <= x2; ++i)
    for (int j = y1; j <= y2; ++j)
      if (a[i][j] == 0)
        return false;
  return true;
}

int main(){
  freopen("HINHCHUNHAT.inp", "r", stdin);
  freopen("HINHCHUNHAT.out", "w", stdout);
  int d = 0;
  input();
  for (int i = 0; i < m; ++i){
    for(int j = 0; j < n; ++j){
      if(a[i][j] == 1) {
        xMin = i, xMax = i;
        yMin = j, yMax = j;
        loang(i, j);
        if(KT(xMin,xMax,yMin,yMax))
          d++;
      }
    }
  }
  cout << d;
  return 0;
}