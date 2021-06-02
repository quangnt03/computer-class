#include <bits/stdc++.h>
#define pa pair<int, int>
using namespace std;

int n, m;
int f[100][100];
int w[100], v[100];

void input(){
  cin >> n >> m;
  for(int i = 1; i <= n; i++)
    cin >> w[i] >> v[i];
}

int main() {
  freopen("CAITUI.inp", "r", stdin);
  input();

  for (int j = 0; j <= m; ++j)
    f[0][j] = 0;

  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j <= m; ++j) {
      if(w[i] <= j)
        f[i][j] = max(f[i-1][j], f[i-1][j-w[i]] + v[i]);
    }
  }
  cout << f[n][m] << endl;

  while(n != 0){
    if(f[n][m] != f[n-1][m]){
      cout << n << " " << w[n] << " " << v[n] << endl;
      m -= w[n];
    }
    n--;
  }

  return 0;
}
