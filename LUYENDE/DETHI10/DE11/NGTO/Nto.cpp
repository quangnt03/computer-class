#include<bits/stdc++.h>
using namespace std;

bool prime(int x){
  if(x < 2)
    return false;
  for(int i = 2; i*i <= x; i++){
    if(x % i == 0)
      return false;
  }
  return true;
}

int main(){
  freopen("Nto.inp", "r", stdin);
  freopen("Nto.out", "w", stdout);
  int n, k;
  cin >> n;
  for(int i = 0 ; i < n; i++){
    cin >> k;
    if(prime(k))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}