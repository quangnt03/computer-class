#include <bits/stdc++.h>
#define pa pair<int,int>
#define f first
#define s second
using namespace std;

int n, p;
pa a[4];
int num = 0;
int res[15];

void input(){
  memset(res, -1, sizeof(res));
  cin >> n >> p;
  for (int i = 0; i < n; i++){
    a[i].f = i;
    cin >> a[i].s;
  }
}

bool comp(pa x, pa y){
  return x.s > y.s;
}

bool check(int idx, int v){
  for(int i = 1; i < p; i++){
    if(res[idx+i] == v || idx-i >= 0 && res[idx-i] == v)
      return false;
  }
  return true;
}

int main(){
  freopen("TQT.inp", "r", stdin);
  freopen("TQT.out", "w", stdout);
  input();
  sort(a, a + n, comp);

  for(int i = 0; i < n; i++){
    int m = i;
    while(a[i].s > 0){
      if(res[m] == -1 && check(m, a[i].f)) {
        res[m] = a[i].f;
        a[i].s--;
      }
      m++;
    }
  }

  for(int i = 0; res[i] != -1; i++)
    num++;

  cout << num;

  return 0;
}