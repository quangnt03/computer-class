#include<bits/stdc++.h>
using namespace std;

int m, n;
int a[100][100];

void input(){
  cin >> m >> n;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++)
      cin >> a[i][j];
  }
}

int main(){
  freopen("MINROW.inp", "r", stdin);
  freopen("MINROW.out", "w", stdout);
  input();
  int hang[100];
  for(int i = 0; i < m; i++){
    int minRow = 10000000;
    int minPos;
    for(int j = 0; j < n; j++){
      if(a[i][j] < minRow){
        minRow = a[i][j];
        minPos = j;
      }
    }
    swap(a[i][0], a[i][minPos]);
  }
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
  return 0;
}