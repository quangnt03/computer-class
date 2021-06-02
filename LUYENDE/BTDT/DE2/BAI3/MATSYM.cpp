#include<bits/stdc++.h>
using namespace std;

int n;
int a[100][100];

void input(){
  cin >> n;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j];
}

bool MTDX(int i1, int j1, int m){
  for(int i = 0; i < m-1; i++){
    for(int j = i + 1; j < m; j++){
      if(a[i1 + i][j1 + j] != a[i1 + j][j1 + i])
        return false;
    }
  }
  return true;
}

int main(){
  freopen("MATSYM.inp", "r", stdin);
  freopen("MATSYM.out", "w", stdout);
  input();
  int iS = 0;
  int jS = 0;
  int MAX = -999999;
  for (int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - 1; j++){
      int maxSize = n - max(i,j);
      for (int k = 1; k < maxSize; k++)
        if(MTDX(i, j, k + 1)){
          if(MAX < k + 1){
            MAX = k + 1;
            iS = i + 1;
            jS = j + 1;
          }
      }
    }
  }
  cout << iS << " " << jS << " " << MAX;

  return 0;
}