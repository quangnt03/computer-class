#include<bits/stdc++.h>
using namespace std;

int na = 0; 
int a[100];
int KQArr[100];
int KQ, MAX = -10000;

bool KTLap(int x){
  for(int i = 1; i <= na; i++){
    if(a[i] == x)
      return true;
  }
  return false;
}

void xuLy(int x){
  int y = x; 
  do{
    na++;
    a[na] = y;
    int t = 0;
    while(y != 0){
      t += (y%10) * (y%10);
      y /= 10;
    }
    y = t;
  }while(!KTLap(y));
  na++;
  a[na] = y;
}

void print(){
  cout << KQ << " " << MAX << endl;
  for(int i = 1; i <= MAX; i++){
    cout << KQArr[i] << " ";
  }
}

int main(){
  int m, n;
  cin >> m >> n;
  for (int i = m; i <= n; i++){
    na = 0;
    memset(a, 0, sizeof(a));
    xuLy(i);
    if(MAX < na){
      MAX = na;
      KQ = i;
      for(int j = 1; j <= na; j++){
        KQArr[j] = a[j];
      }
    }
  }
  print();
  return 0;
  
}