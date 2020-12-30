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

void findMinInRow(int m){
  int initalMinValue = 100000;
  int column;
  for(int i = 0; i < n; i++){
    if(a[m][i] < initalMinValue){
      initalMinValue = a[m][i];
      column = i+1;
    }
  }
  cout << initalMinValue << " " << column << " ";
}
void findMaxInRow(int m){
  int initalMaxValue = -100000;
  int column;
  for(int i = 0; i < n; i++){
    if(a[m][i] > initalMaxValue){
      initalMaxValue = a[m][i];
      column = i+1;
    }
  }
  cout << initalMaxValue << " " << column;
}


int main(){
  freopen("MMROW.inp", "r", stdin);
  freopen("MMROW.out", "w", stdout);
  input();

  for(int i = 0; i < m; i++){
    findMinInRow(i);
    findMaxInRow(i);
    cout << endl;
  }
  return 0;
}