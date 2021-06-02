#include <bits/stdc++.h>
using namespace std;
int A[10001], B[200002];
int N;

int main(){
  freopen("TONGVONG.inp", "r", stdin);
  freopen("TONGVONG.out", "w", stdout);
  cin >> N;
  for (int i = 1; i <= N; i++){
    cin >> A[i];
  }

  for (int i = 1; i <= N; i++)  {
    B[i] = A[i];
    B[N + i] = A[i];
  }
 
  int MAX = -99999;
  int sum = 0;
  
  for (int i = 1; i <= 2 * N; i++){
    sum = max(B[i], sum + B[i]);
    MAX = max(MAX, sum);
  }

  cout << MAX;
  return 0;
}