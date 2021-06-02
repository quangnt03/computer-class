#include<bits/stdc++.h>
using namespace std;

struct frac{
  int num;
  int dem;
  double dValue = double(num)/double(dem);
};

int gcd(int x, int y){
  while(x*y != 0){
    if(x > y)
      x %= y;
    else
      y %= x;
  }
  return x + y;
}

frac simplify(frac f){
  int cd = gcd(f.num, f.dem);
  return frac{f.num/cd, f.dem/cd};
}

bool rule(frac a, frac b){
  return a.dValue < b.dValue;
}

int main(){
  freopen("SPXS.inp", "r", stdin);
  freopen("SPXS.out", "w", stdout);
  map<double,bool>visited;
  vector<frac> a;
  int n, k;
  cin >> n >> k;
  for(int i = 1; i <= n; i++){
    for(int j = 0; j <= i; j++){
      frac simplified = simplify({j,i});
      if(visited[simplified.dValue] == 0){
        a.push_back(simplified);
        visited[simplified.dValue] = 1;
      }
    }
  }
  
  sort(a.begin(), a.end(), rule);
  cout << a[k-1].num << "/" << a[k-1].dem;
  return 0;
}