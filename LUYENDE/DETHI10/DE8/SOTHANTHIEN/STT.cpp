#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  while(a*b != 0){
    if(a > b)
      a %= b;
    else 
      b %= a;
  }
  return a + b;
}

int reverseNumber(int x){
  string str = to_string(x);
  int res;
  reverse(str.begin(), str.end());
  stringstream stream(str);
  stream >> res;
  return res;
}

int main(){
  for(int i = 10; i < 100; i++){
    if(gcd(i, reverseNumber(i)) == 1)
      cout << i << " ";
  }
  return 0;
}