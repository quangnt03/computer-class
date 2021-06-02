#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
  for(int i = 2; i*i <= n; i++)
    if(n%i == 0)
      return false;
  return true;
}

int main(){
  int x=2,y,z,n;
  cin >> n;

  if(n < 13){
    cout << -1;
    exit(0);
  }

  for(y=3; y*y <= n; y++){
    if(isPrime(y)){
      z=y*y+4;
      if(isPrime(z))
        cout << z << " = " << x << "^2" << " + " << y << "^2" << endl;
    }
  }
  return 0;
}