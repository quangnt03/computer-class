#include <bits/stdc++.h>
using namespace std;

int m,n, a[100];

void input(){
  cin >> m >> n;
  int length = m*n;
  for(int i = 0; i < length; i++)
    cin >> a[i];
}

bool noFilter(int a){
  return true;
}

bool positiveFilter(int a){
  return a > 0;
}
bool negativeFilter(int a){
  return a < 0;
}
bool evenFilter(int a){
  return a % 2 == 0;
}
bool oddFilter(int a){
  return a % 2 == 1;
}

int count(bool (*filter)(int)){
  int result = 0;
  for(int i = 0; i < m*n; i++){
    if(filter(a[i]))
      result += a[i];
  }
  return result;
}

int main(){
  freopen("MTSUM.inp", "r", stdin);
  freopen("MTSUM.out", "w", stdout);
  input();

  cout << count(noFilter) << endl;
  cout << count(positiveFilter) << endl;
  cout << count(negativeFilter) << endl;
  cout << count(evenFilter) << endl;
  cout << count(oddFilter);

  return 0;
}