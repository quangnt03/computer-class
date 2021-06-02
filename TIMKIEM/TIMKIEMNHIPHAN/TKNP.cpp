#include<bits/stdc++.h>
using namespace std;

int a[10], b[10];
int m, n;

void input(){
  cin >> m;
  for(int i = 0; i < m; i++)
    cin >> a[i];
  sort(a, a+m);
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> b[i];
}

bool search(int x){
  int l = 0, r = m-1;
  while(l < r){
    int mid = (l + r)/2;
    if(a[mid] == x)
      return true;
    if(a[mid] < x)
      l = mid + 1;
    if(a[mid] > x)
      r = mid - 1;
  }
  return false;
}

int main(){
  freopen("TKNP.inp", "r", stdin);
  freopen("TKNP.out", "w", stdout);
  int result = 0;
  input();
  for(int i = 0; i < n; i++)
    if(search(b[i]))
      result++;

  cout << result;
  return 0;
}