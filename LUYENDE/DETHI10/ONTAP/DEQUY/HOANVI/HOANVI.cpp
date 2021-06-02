#include<bits/stdc++.h>
using namespace std;

int a[100];
bool mark[100] = {false};
int res[100];

int n;

void print(){
  for(int i = 1; i <= n; i++)
    cout << a[i] << " ";
  cout << endl;
}

void backTrack(int k){
  for(int i = 1; i <= n; i++){
    if(!mark[i]){
      mark[i] = true;
      a[k] = i;
      if(k == n)
        print();
      else
        backTrack(k+1);
      mark[i] = false;
    }
  }
}

int main(){
  cin >> n;
  backTrack(1);
  return 0;
}