#include<bits/stdc++.h>
using namespace std;

struct frac{
  int num;
  int den;
};

int d = 0;
frac f[11];

int gcd(int a, int b){
  while(a*b != 0){
    if(a > b)
      a = a%b;
    else
      b = b%a;
  }
  return a+b;
}

bool comp(frac a, frac b){
  return (double)a.num/a.den < (double)b.num/b.den;
}

void fracGenerator(int n){
  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j <= i; ++j) {
      if(gcd(i,j)==1) {
        frac a{j,i};
        f[d] = a;
        d++;
      }
    }
  }
  sort(f,f+d, comp);
}

int main(){
  freopen("SXPS.inp", "r", stdin);
  freopen("SXPS.out", "w", stdout);

  int n,k;
  cin >> n >> k;
  fracGenerator(n);
  cout << f[k-1].num << "/" << f[k-1].den << " ";
  return 0;
}