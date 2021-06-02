#include<bits/stdc++.h>
#define MAX 10
using namespace std;

int a[100];
int n;

void input(){
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> a[i];
}

int main(){
  freopen("XYZ.inp", "r", stdin);
  freopen("XYZ.out", "w", stdout);
  input();

  int s = 0;

  bitset<MAX> myBit[100];
  for (int i = 0; i < n; ++i) {
    myBit[i] = bitset<MAX>(a[i]);
  }

  for (int i = 0; i < n; ++i) {
    for (int j = i+1; j < n; ++j) {
      int bit = static_cast<int>((myBit[i] ^ myBit[j]).to_ullong());
      s+=bit;
    }
  }

  cout << s;

  return 0;
}