#include <bits/stdc++.h>
using namespace std;

int n;
int a[100];

void input(){
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
}


int main(){
  int maxFre = 1;
  int maxFrePrice = a[0];
  int fre = 1;
  int price = a[0];

  freopen("GIANHAO.inp", "r", stdin);
  freopen("LOAIGIA.out", "w", stdout);

  input();
  sort(a, a + n);

  for (int i = 1; i < n; ++i) {
    if (a[i] == price)
      fre++;
    else{
      if (maxFre < fre){
        maxFrePrice = price;
        maxFre = fre;
      }
      price = a[i];
      fre = 1;
    }
  }
  cout << maxFre << " "<< maxFrePrice;
  return 0;
}