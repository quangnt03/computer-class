#include <iostream>
using namespace std;

int main() {
  int a[5];
  a[0] = 2, a[1] = 0, a[2] = 2, a[3] = 0;

  int n, i = 4;
  cin >> n;

  bool isRepeated = false;
  int repeatPos;

  while(i < n){
    a[4] = (a[0]+a[1]+a[2]+a[3])%10;
    i++;

    a[0] = a[1], a[1] = a[2], a[2] = a[3], a[3] = a[4];

    if(a[0] == 2 && a[1] == 0 && a[2] == 2 && a[3] == 0){
      isRepeated = true;
      repeatPos = i-4;
    }
  }
  cout << a[4] << endl;

  if(isRepeated)
    cout << repeatPos;

  return 0;
}
