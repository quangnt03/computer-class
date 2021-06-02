#include<bits/stdc++.h>
using namespace std;

int a, b, c, d ,e, m;

int cal(int a, int b, int op){
  switch (op){
    case 0:
      return a + b;
    case 1:
      return a - b;
    case 2:
      return a * b;
    default:
      return a / b;
  }
}

char chooseOperator(int idx){
  switch (idx)
  {
    case 0:
      return '+';
    case 1:
      return '-';
    case 2:
      return '*';
    default:
      return '/';
  }
}

int main(){
  cin >> a >> b >> c >> d >> e >> m;
  
  for(int i = 0; i < 4; i++) 
    for (int j = 0; j < 4; j++) 
      for (int p = 0; p < 4; p++) 
        for(int q = 0; q < 4; q++) 
          if(cal(cal(cal(cal(a,b,i),c,j),d,p),e,q) == m){
            cout << "(((" << a << chooseOperator(i) << b << ')';
            cout << chooseOperator(j) << c << ')' << chooseOperator(p);
            cout << d << ')' << chooseOperator(p);
            cout << e << '=' << m << endl;
          }

  return 0;
}