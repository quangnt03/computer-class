#include<bits/stdc++.h>
using namespace std;


int main(){
  freopen("DAYCON.inp", "r", stdin);
  freopen("DAYCON.out", "w", stdout);

  int n; 
  int a[100];
  int maxL = -1;

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int i = 0, j;
  while(i < n){
    int j = i+1;
    while(a[j]==a[i])
      j++;
    maxL = max(maxL, j-i);
    i=j;
  }
  
  cout << maxL;
  return 0;
}