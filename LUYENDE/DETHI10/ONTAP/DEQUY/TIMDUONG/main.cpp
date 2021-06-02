#include<bits/stdc++.h>
using namespace std;

struct P{
  int x,y;
};

int m, n;
int xS,yS;
int a[100][100];
P traces[100][100];

void input(){
  cin >> m >> n >> xS >> yS;
  xS--, yS--;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> a[i][j];
    }
  }
}

bool inside(int x, int y){
  return x >= 0 && x < m && y >= 0 && y < n;
}

int bfs(int x, int y){
  const int X[4] = {-1,1,0,0};
  const int Y[4] = {0,0,-1,1};
  int step = 0;
  queue<P> q;
  P end;
  q.push(P{x, y});
  a[x][y] = 1;
  while(!q.empty()){
    for(int i = 0; i < 4; i++){
      int u = q.front().x + X[i];
      int v = q.front().y + Y[i];
      if(inside(u,v) && a[u][v] == 0){
        q.push(P{u,v});
        a[u][v] = 1;
        traces[u][v].x = q.front().x;
        traces[u][v].y = q.front().y;
        if(u == 0 || u == m-1 || v == 0 || v == n-1){
          end.x = u;
          end.y = v;
          goto findWay;
        }
      }
    }
    q.pop();
  }
  findWay: while (end.x != x || end.y != y){
    step++;
    P mid{end.x,end.y};
    end.x = traces[mid.x][mid.y].x;
    end.y = traces[mid.x][mid.y].y;
  }
  return step;
}

int main(){
  freopen("DEMVUNG.inp", "r", stdin);
  input();
  cout << bfs(xS,yS);
  return 0;
}