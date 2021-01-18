#include<bits/stdc++.h>
#define MAX 20
using namespace std;

const int dx[8] = {-2,-2,-1,1,2,2,1,-1},
          dy[8] = {-1,1,2,2,1,-1,-2,-2};

int k = 0;

void print(int _arr[MAX][MAX], int n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++)
      cout<< _arr[i][j] << "\t";
    cout << endl;
  }
}

bool isInside(int x, int y, int n){
  return (x >= 0 && x < n && y >= 0 && y < n);
}

void backTrack(int _arr[MAX][MAX], int n,int x, int y){
  k++;
  _arr[x][y]=k;
  for(int i = 0; i < 8; i++){
    if(k == n*n){
      print(_arr,n);
      exit(0);
    }
    else{
      int u = x + dx[i];
      int v = y + dy[i];

      if(_arr[u][v] == 0 && isInside(u,v, n))
        backTrack(_arr,n,u,v);
    }
  }

  k--;
  _arr[x][y]=0;
}

int main(){
  int a[MAX][MAX] = {0};
  int n;

  int x0, y0;

  cin >> n >> x0 >> y0;
  
  backTrack(a,n,x0,y0);
  
  return 0;
}
