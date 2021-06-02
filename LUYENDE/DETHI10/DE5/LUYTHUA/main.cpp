#include <bits/stdc++.h>
using namespace std;

int main(){
  freopen("LUYTHUA.out", "w", stdout);

  int a[100000] = {0};
  int size=1;
  int n = 1000;
  int temp, carry = 0;

  a[0] = 1;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < size; ++j) {
      temp = a[j]*2 + carry;
      a[j] = temp % 10;
      carry = temp/10;
    }
    while (carry > 0){
      a[size] = carry%10;
      carry /= 10;
      size++;
    }
  }

  cout << size << " " << a[size-1];
  return 0;
}