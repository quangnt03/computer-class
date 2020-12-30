#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int n;

void input()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      cin >> a[i][j];
}

int main()
{
  freopen("MTDV.INP", "r", stdin);
  freopen("MTDV.OUT", "w", stdout);
  input();
  bool kt = true;
  int count = 0;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (a[i][j] == 1)
        count++;
  if (count != n)
    kt = false;
  else
  {
    for (int i = 1; i <= n; i++)
      if (a[i][i] != 1)
        kt = false;
  }
  if (kt == false)
    cout << "0" << endl;
    
  else
  {
    cout << "1" << endl;
  }
  cout << n * n - count;
  return 0;
}