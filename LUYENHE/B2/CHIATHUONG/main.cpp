#include <bits/stdc++.h>
using namespace std;

int f[100][100];
int n, m;

int main() {
  cin >> m >> n;
  f[0][0] = 1;
  for(int j = 1; j <= n; j++)
    f[0][j] = 1;
  for(int i = 1; i <= m; i++)
    f[i][0] = 0;

  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= m; j++){
      if(i < j)
        f[i][j] = f[i][i];
      else
        f[i][j] = f[i][j-1] + f[i-j][i];
    }
  }
  cout << f[m][n];
  return 0;
}
