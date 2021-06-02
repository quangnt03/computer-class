#include <bits/stdc++.h>
#define WIN 3
#define DRAW 1
#define LOSE 0
using namespace std;

int a[100][100];
int m, n;

void input(){
  cin >> m >> n;
  for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j)
      cin >> a[i][j];
}

int main(){
  int highestScore = -1;
  int champion;

  freopen("BODA.inp", "r", stdin);
  freopen("BODA.out", "w", stdout);

  input();
  for (int i = 0; i < m; ++i) {
    int nWin = 0,
        nDraw = 0,
        nLose = 0,
        score = 0;
    for (int j = 0; j < n; ++j) {
      if(a[i][j] == WIN)
        nWin++;
      if(a[i][j] == DRAW)
        nDraw++;
      if(a[i][j] == LOSE)
        nLose++;
    }
    score += nDraw + nWin*WIN;
    cout << nWin << " " << nDraw << " " << nLose << " " << score << endl;
    if(score > highestScore){
      highestScore = score;
      champion = i;
    }
  }

  cout << champion+1;

  return 0;
}