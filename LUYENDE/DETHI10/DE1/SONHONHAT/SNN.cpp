#include <bits/stdc++.h>
#define MAX 1000000

using namespace std;

int n;
int a[MAX];
bool visited[MAX] = {false}; 

void input(){
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> a[i];
}

int main(){
  freopen("SNN.inp", "r", stdin);
  freopen("SNN.out", "w", stdout);
  input();
  
  for(int i = 0; i < n; i++)
    visited[a[i]] = true;

  for (int i = 1; i <= MAX; ++i) {
    if(!visited[i]){
      cout << i;
      break;
    }
  }

  return 0;
}