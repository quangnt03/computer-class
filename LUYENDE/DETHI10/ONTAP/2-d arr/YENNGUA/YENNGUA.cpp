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

bool nhoHang(int i, int j1){
  for(int j = 0; j < n; j++){
    if(a[i][j1] > a[i][j])
      return false;
  }
  return true;
}

bool lonHang(int i, int j1){
  for(int j = 0; j < n; j++){
    if(a[i][j1] < a[i][j])
      return false;
  }
  return true;
}

bool nhoCot(int i1, int j){
  for(int i = 0; i < m; i++){
    if(a[i1][j] > a[i][j])
      return false;
  }
  return true;
}

bool lonCot(int i1, int j){
  for(int i = 0; i < m; i++){
    if(a[i1][j] < a[i][j])
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
      if((nhoHang(i,j) && lonCot(i,j)) || (nhoCot(i,j) && lonHang(i,j)))
        cout << "(" << i+1 << ";" << j+1 << ")" << endl;
    }
  }
  return 0;
}