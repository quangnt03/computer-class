#include<bits/stdc++.h>
using namespace std;

int m,n;
int a[101][101];

void input(){
  cin >> m >> n;
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++)
      cin >> a[i][j];
  }
}

int sumOfRow(int i){
  int acc = 0;
  for(int j = 0; j < n; j++){
    acc += a[i][j];
  }
  return acc;
}

int main(){
  freopen("BARR.inp", "r", stdin);
  freopen("BARR.out", "w", stdout);
  input();
  int maxVal = -1000, iMax;
  int minVal = 1000, iMin;
  for(int i = 0; i < m; i++){
    cout << sumOfRow(i)  << " ";
    if(sumOfRow(i) > maxVal){
      maxVal = sumOfRow(i);
      iMax = i;
    }
    if(sumOfRow(i) < minVal){
      minVal = sumOfRow(i);
      iMin = i;
    }
  }
  cout << endl << iMax + 1 << " " << iMin + 1;
  return 0;
}