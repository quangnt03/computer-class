#include <bits/stdc++.h>
using namespace std;

int m,n, a[100][100];

void input(){
  cin >> m >> n;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
}

int main(){
  freopen("MINMAX.inp", "r", stdin);
  freopen("MINMAX.out", "w", stdout);
  input();

  int minValue = 10000;
  int x, y;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] < minValue){
        x = i;
        y = j;
        minValue = a[i][j];
      }
    }
  }
  cout << minValue << " " << x+1 << " " << y+1 << endl;

  int maxValue = -10000;
  int b , c;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] > maxValue){
        b = i;
        c = j;
        maxValue = a[i][j];
      }
    }
  }
  cout << maxValue << " " << b+1 << " " << c+1 ;

  return 0;
}