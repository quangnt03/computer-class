#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  while(a * b != 0){
    if(a > b)
      a %= b;
    else 
      b %= a;
  }
  return a + b;
}

int main(){
  freopen("GIFT.inp", "r", stdin);
  freopen("GIFT.out", "w", stdout);
  int x, y;
  cin >> x >> y;
  int cd = gcd(x,y);
  for(int i = 1; i <= cd; i++){
    if(x % i == 0 && y % i == 0)
      cout << i << " " << x/i << " " << y/i << endl;
  } 
}