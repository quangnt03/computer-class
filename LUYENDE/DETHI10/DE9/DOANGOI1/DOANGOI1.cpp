#include<bits/stdc++.h>
#define P pair<int, int>
using namespace std;

int n;
P a[100];

void input(){
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> a[i].first >> a[i].second;
}

int main(){
  int s = 0;
  freopen("DOANGOI1.inp", "r", stdin);
  freopen("DOANGOI1.out", "w", stdout);
  input();

  sort(a, a + n);
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++)
      if(a[i].second == a[j].first)
        s++;
  }
  cout << s;
  return 0;
}