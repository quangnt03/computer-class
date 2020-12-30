#include<bits/stdc++.h>
using namespace std;

int n, a[1000][1000], b[1000][1000];

void input(){
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> a[i][j];
    }
  }
}

bool MTDX(){
  for(int i = 0; i < n-1; i++){
    for (int j = i+1; j < n; j++)  {
      if(a[i][j] != a[j][i])
        return false;
    }  
  }
  return true;
}

void xoaDX(){
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      cout << a[i][j] << " ";
    }
    cout << '\n';
  }
}

void taoDX(){
  for(int i = 0; i < n-1; i++){
    for (int j = i+1; j < n; j++)  {
      a[i][j] = a[j][i];
    }  
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << a[i][j] << " ";
    }
    cout << '\n';
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  freopen("MTDX.inp", "r", stdin);
  freopen("MTDX.out", "w", stdout);

  input();

  if(MTDX()){
    cout << "YES \n";
    xoaDX();
  }
  else{
    cout << "NO \n";
    taoDX();
  }
  return 0;
}