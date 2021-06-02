#include <bits/stdc++.h>
using namespace std;

int m, n;
int f[100][100];

int main() {
  freopen("DUONGDI.inp", "r", stdin);
  cin >> m >> n;
  for(int i = 1; i <= m; i++)
    f[1][i] = 1;
  for(int j = 1; j <= n; j++)
    f[j][1] = 1;

  for (int i = 2; i <= m; ++i) {
    for(int j = 2; j <= n; ++j)
      f[i][j] = f[i-1][j] + f[i][j-1];
  }
  cout << f[m][n];
  return 0;
}
