#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];

void print(){
  for(int i = 1; i <= n; i++)  
    cout << a[i] << " ";
  cout << '\n';
}

void backTrack(int x){
  for(int i = 0; i <= 1; i++){
    a[x] = i;
    if(x == n)
      print();
    else
      backTrack(x + 1);
  }
}

int main(){
  cin >> n;
  backTrack(1);
  return 0;
}