#include<bits/stdc++.h>
using namespace std;

int n;
string a[100];

void input(){
  int i = 0;
  int x;
  cin >> n;
  while(i < n){
    cin >> x;
    a[i] = to_string(x);
    i++;
  }
}

int main(){
  freopen("NUMJOIN.inp", "r", stdin);
  freopen("NUMJOIN.out", "w", stdout);
  input();
  sort(a, a+n, greater<string>());
  for(int i = 0; i < n; i++)
    cout << a[i];
  return 0;
}