#include<bits/stdc++.h>
using namespace std;

int a[1000];

int find(int k){
  if(k==1)
    return a[1];
  if(k==2)
    return a[2];
  if(k%2 == 1)
    return find(k/2)*10 + 4;

  return find(k/2-1)*10 + 7;
}

int main(){
  a[1] = 4;
  a[2] = 7;

  int k;
  cin >> k;
  cout << find(k);
}