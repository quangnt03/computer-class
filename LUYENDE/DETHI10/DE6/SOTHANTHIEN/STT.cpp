#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int x){
    string s = to_string(x); 
    reverse(s.begin(), s.end());

    stringstream geek(s);  
    int res = 0; 
    geek >> res; 
  
    return res; 
}

int gcd(int a, int b){
  while(a*b != 0){
    if(a > b)
      a = a%b;
    else
      b = b%a;
  }
  return a+b;
}

int main(){
  freopen("STT.inp", "r", stdin);
  freopen("STT.out", "w", stdout);

  int n = 0;
  int a, b;

  cin >> a >> b;

  for(int i = a; i <= b; i++){
    int j = reverseNumber(i);
    if(gcd(i,j) == 1)
      n++;
  }

  cout << n;
  return 0;
}