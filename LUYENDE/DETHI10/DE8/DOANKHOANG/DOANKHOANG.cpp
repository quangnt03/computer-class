#include<bits/stdc++.h>
using namespace std;

struct P{
  int idx;
  int l;
  int r;
};

P a[100];
int result[100];
int n;

void input(){
  cin >> n;
  for(int i = 0; i < n; i++){
    a[i].idx = i;
    cin >> a[i].l >> a[i].r;
  }
}

bool comp(P a, P b){
  return a.r < b.r;
}

int main(){
  int d = 1, r;
  
  freopen("DOANKHOANG.inp", "r", stdin);
  freopen("DOANKHOANG.out", "w", stdout);
  input();
  
  sort(a,a+n, comp);
  r = a[0].r;

  for(int i = 1; i < n; i++){
    if(a[i].l > r){
      result[d-1] = a[i].idx+1;
      d++;
      r = a[i].r;
    }
  }
  cout << d << endl;
  for(int i = 0; i < d; i++){
    cout << result[i] << endl;
  }
}