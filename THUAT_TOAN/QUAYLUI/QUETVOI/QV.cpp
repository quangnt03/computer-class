#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

int A[100][100] = {0};
int dd[100][100] = {0};

int m, n;
int S, S_max = -1;
int dem = 0;

void nhap_mang() {
  cin >> m >> n;
  for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
      cin >> A[i][j];
}

void loang(int x, int y) {
  dd[x][y] = 1;
  for (int k = 0; k < 4; k++) {
    int u = x + dx[k];
    int v = y + dy[k];
    S += max(0, A[x][y] - A[u][v]);
    if (A[u][v] > 0 && dd[u][v] == 0)
      loang(u, v);
  }
}

int main() {
  int tt;

  freopen("QV.inp", "r", stdin);
  freopen("QV.out", "w", stdout);
  nhap_mang();

  for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
      if (A[i][j] > 0 && dd[i][j] == 0) {
        dem++;
        S = 0;
        loang(i, j);
        if (S > S_max) {
          tt = dem;
          S_max = S;
        }
      }

  cout << dem << endl;
  cout << tt << " " << S_max;

  return 0;
}
