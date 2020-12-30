#include <bits/stdc++.h>
using namespace std;

int m, n, a[101][101];

void input(){
  cin >> m >> n;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> a[i][j];
    }
  }
}

void findMinInCol(int n){
  int initalMinValue = 100000;
  int row;
  for(int i = 0; i < m; i++){
    if(a[i][n] < initalMinValue){
      initalMinValue = a[i][n];
      row = i+1;
    }
  }
  cout << initalMinValue << " " << row << " ";
}

void findMaxInCol(int n){
  int initalMaxValue = -100000;
  int row;
  for(int i = 0; i < m; i++){
    if(a[i][n] > initalMaxValue){
      initalMaxValue = a[i][n];
      row = i+1;
    }
  }
  cout << initalMaxValue << " " << row << " ";
}


int main(){
  freopen("MMCOL.inp", "r", stdin);
  freopen("MMCOL.out", "w", stdout);
  input();

  for(int i = 0; i < m; i++){
    findMinInCol(i);
    findMaxInCol(i);
    cout << endl;
  }
  return 0;
}