#include <bits/stdc++.h>
using namespace std;

int m, n;
int a[20][20];
int d = 0;

const int dX[4] = {1, -1, 0, 0};
const int dY[4] = {0, 0, 1, -1};

bool isPrime(int x)
{
  if (x < 2)
    return false;
  else
  {
    for (int i = 2; i * i <= x; i++)
      if (x % i == 0)
        return false;
  }
  return true;
}

void input()
{
  cin >> m >> n;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }
}

void print(){
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
}

bool isInside(int x, int y)
{
  return (x >= 0 && x < m && y >= 0 && y < n);
}

void backTrack(int x, int y)
{
  a[x][y] = 0;
  for (int k = 0; k < 4; k++)
  {
    int u = x + dX[k], v = y + dY[k];
    if (isPrime(a[u][v]) && isInside(u, v))
      backTrack(u, v);
  }
}

int main()
{
  freopen("DEMVUNG.inp", "r", stdin);
  freopen("DEMVUNG.out", "w", stdout);

  input();
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (isPrime(a[i][j]))
      {
        d++;
        backTrack(i, j);
      }
    }
  }
  cout << d << endl;
  print();
  return 0;
}