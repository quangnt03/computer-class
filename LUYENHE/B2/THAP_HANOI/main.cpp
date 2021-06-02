#include <bits/stdc++.h>
using namespace std;
char a = 'A', b = 'B', c = 'C';

void chuyen(int n, char A, char B, char C){
  if(n == 1)
    cout << A << " -> " << B << ": " << n << endl;
  else{
    chuyen(n-1, A, C, B);
    chuyen(1, A, B, C);
    chuyen(n-1, C, B, A);
  }
}

int main(){
  int n;
  cin >> n;
  chuyen(n, a, b, c);
  return 0;
}