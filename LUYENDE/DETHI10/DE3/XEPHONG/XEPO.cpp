#include <bits/stdc++.h>
#define Pii pair<int,int>
using namespace std;

int n;
Pii a[100];
bool mark[100] = {false};

void input(){
  cin >> n;
  for(int i = 0; i < n; ++i)
    cin >> a[i].first >> a[i].second;
  sort(a,a+n);
}


int main(){
  freopen("XEPO.inp", "r", stdin);
  freopen("XEPO.out", "w", stdout);
  input();

  int d = 1;

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if(a[j].first < a[i].second && !mark[j])
        d++;
      else
        mark[j]=true;
    }
  }
  cout << d;
  return 0;
}