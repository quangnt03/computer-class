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
  int nSeg = 0;
  
  for(int i = 0; i < n; i++)
    nSeg += a[i]/m;
  
  return nSeg >= k;
}

int main(){
  freopen("CATDAY.inp", "r", stdin);
  freopen("CATDAY.out", "w", stdout);
  input();
  
  int f = 1, l = s/k;
  int res;

  while(f <= l){
    int m = (f + l)/2;
    if(valid(m)){
      res = m;
      f = m+1;
    }
    else
      l = m-1;
  }

  cout << res;

  return 0;
}