#include<bits/stdc++.h>
using namespace std;

int bit(int x){
  int c = 0;
  while(x != 0){
    if(x % 2)
      c++;
    x /= 2;
  }
  return c;
}

int main(){
  int n, k, res = 0;
  cin >> n >> k;
  for(int i = 2; i <= n; i++)
    if(bit(i) == k)
      res++;
  cout << res;
  return 0;
}