#include <bits/stdc++.h>
using namespace std;
int a[21];
int KQ[21][21];
int dd[21];
int N;
int V;
int S_max = -1;
int dem = 0;

void xuly()
{
  int S = 0;

  for (int i = 1; i <= N; i++)
  {
    if (dd[i] == 1)
    {
      S = S + a[i];
    }
  }
  if (S == V)
  {
    dem++;
    for (int j = 1; j <= N; j++)
    {
      KQ[dem][j] = dd[j];
    }
  }
}

void nhap()
{
  cin >> N >> V;
  for (int i = 1; i <= N; i++)
  {
    cin >> a[i];
  }
}

void backtrack(int i)
{
  int j;
  for (j = 0; j <= 1; j++)
  {
    dd[i] = j;
    if (i == N)
      xuly();
    else
    {
      backtrack(i + 1);
    }
  }
}
int main()
{
  freopen("water.inp", "r", stdin);
  freopen("water.out", "w", stdout);
  nhap();
  backtrack(1);
  cout << dem << endl;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++){
      if (KQ[i][j] == 1)
      {
        cout << j << " ";
      }
    }
    cout << endl;
  }
}