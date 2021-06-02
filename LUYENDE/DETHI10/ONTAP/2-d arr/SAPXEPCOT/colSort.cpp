#include<bits/stdc++.h>
using namespace std;

int m, n;
int a[100][100];

void input(){
  cin >> m >> n;
  for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j];
}

int main(){
  freopen("COLSORT.inp", "r", stdin);
  freopen("COLSORT.out", "w", stdout);
  input();
  for(int j = 0; j < n; j++){
    for(int i = 0; i < m - 1; i++){
      for(int k = i+1; k < m; k++){
        if(a[i][j] > a[k][j])
          swap(a[i][j], a[k][j]);
      }
    }
  }
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
  return 0;
}