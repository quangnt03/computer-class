/*Input
5 6
0 4 3 2 0 0
0 0 0 0 6 5
7 -7 0 0 0 0
5 6 0 0 7 9
0 0 0 0 -9 8
*/

#include<bits/stdc++.h>
using namespace std;

struct P{
  int x; 
  int y;
};

const int X[4] = {0,0,-1,1};
const int Y[4] = {1,-1,0,0};

queue<P>q;
int m,n;
int a[10][10];
P vet[10][10];
int x2, y2;

void input(){
  cin >> m >> n;
  for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j];
}

bool inside(int x, int y){
  return x >= 0 && x < m && y > 0 && y < n;
}

bool border(int x, int y){
  return x == 0 || x == m - 1 || y == 0 || y == n - 1;
}

void truyHoi(int x,int y){
  while(x2 != x && y2 != y){
    cout << "(" << vet[x2][y2].x + 1 << ";" << vet[x2][y2].y + 1 << ") ";
    int u = x2, v = y2;
    x2 = vet[u][v].x, y2 = vet[u][v].y; 
  }
}

void dfs(int x, int y){
  a[x][y] = -1;
  P np;
  np.x = x;
  np.y = y;
  q.push(np);

  while(!q.empty()){
    P fp = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int u = fp.x + X[i];
      int v = fp.y + Y[i];
      if(inside(u,v) && a[u][v] == 0){
        a[u][v] = -1;
        np.x = u;
        np.y = v;
        q.push(np);
        vet[u][v].x = fp.x;
        vet[u][v].y = fp.y;
        if(border(u,v)){
          x2 = u;
          y2 = v;
          truyHoi(x,y);
          break;
        }
      }
    }
  }
}

int main(){
  int x=1, y=3;
  freopen("DEMVUNG.inp", "r", stdin);
  input();
  dfs(x,y);
  return 0;
}