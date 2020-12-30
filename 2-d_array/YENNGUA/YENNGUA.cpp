#include<bits/stdc++.h>
using namespace std;

int m,n;
int a[101][101];

void input(){
  cin >> m >> n;
  for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j]; 
}

bool isMaxInRow(int iC, int jC){
  int c = a[iC][jC];
  for(int i = 0; i < n; i++){
    if(a[iC][i] > c)
      return false;
  }
  return true;
}

bool isMinInRow(int iC, int jC){
  int c = a[iC][jC];
  for(int i = 0; i < n; i++){
    if(a[iC][i] < c)
      return false;
  }
  return true;
}

bool isMaxInCol(int iC, int jC){
  int c = a[iC][jC];
  for(int i = 0; i < m; i++){
    if(a[i][jC] > c)
      return false;
  }
  return true;
}

bool isMinInCol(int iC, int jC){
  int c = a[iC][jC];
  for(int i = 0; i < m; i++){
    if(a[i][jC] < c)
      return false;
  }
  return true;
}

int main(){
  freopen("YENNGUA.inp", "r", stdin);
  freopen("YENNGUA.out", "w", stdout);

  input();

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(isMinInRow(i,j) && isMaxInCol(i, j))
        cout << i+1 << " " << j+1 << endl;
        
      if(isMaxInRow(i, j) && isMinInCol(i, j))
        cout << i+1 << " " << j+1 << endl;
    }
  }
  
  return 0;
}