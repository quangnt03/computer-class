#include<bits/stdc++.h>
using namespace std;

int a[100];
int bit[100];
int res[100][100];
int d = 0;
int s;


void backtrack(int n){
  for(int i = 0; i <= 1; i++){
    if(i == n)
      cal(n);
    else
      backtrack(i+1);
  }
}

void cal(int n){
  int acc = 0;
  for(int i = 0; i < n; i++)
    if(bit[i] == 1)
      acc += a[i];

  if(s == acc){
    for(int j = 0; j < n; j++)
      res[d][j] = a[j];
    d++;
  }
}

int main(){
  cin >> s;

}