#include<bits/stdc++.h>
using namespace std;

int n, k, s = 0;
int a[100];

void input(){
  cin >> n >> k;
  for (int i = 0; i < n; i++){
    cin >> a[i];
    s += a[i];
  }
}

bool valid(int m){
  int box = 1;
  int remain = 0;
  for(int i = 0; i < n; i++){
    if(a[i] > m)
      return false;
    if(a[i] + remain <= m)
      remain += a[i];
    else{
      box++;
      if(box > k)
        return false;
      else
        remain = a[i];
    }
  }
  return true;
}

int main(){
  freopen("ZXY.inp", "r", stdin);
  freopen("ZXY.out", "w", stdout);
  input();
  int f = 1, l = s;
  int res;
  while(f <= l){
    int m = (f+l)/2;
    if(valid(m)){
      res = m;
      l = m-1;
    }
    else
      f = m+1;
  }
  cout << res;
  return 0;
}