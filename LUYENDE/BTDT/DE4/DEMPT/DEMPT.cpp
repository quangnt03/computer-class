#include<bits/stdc++.h>
using namespace std;

int m, n;
int b[100];

int has[100];

void input(){
  memset(has, 0, sizeof(has));
  int x;
  cin >> m;
  for(int i = 0; i < m; i++){
    cin >> x;
    has[x]++;
  }
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> b[i];
}

int count(){
  int result = 0;
  for(int i = 0; i < n; i++)
    result += has[b[i]];
  return result;
}

int main(){
  freopen("DEMPT.inp", "r", stdin);
  freopen("DEMPT.out", "w", stdout);
  input();
  cout << count() << endl;
  return 0;
}