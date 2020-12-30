#include<bits/stdc++.h>
using namespace std;

int a[100][100];
int n, m;

void input(){
  cin >> n >> m;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
}

bool isPrime(int x){
  if(x < 2)
    return false;
  else{
    for(int i = 2; i*i < x; i++){
      if(x%i == 0)
        return false;
    }
    return true;
  }
}

bool accending(int i){
  bool isAccending = true;
  for(int j = 0; j < n-1; j++){
    if(a[i][j] >= a[i][j+1]){
      isAccending = false;
      break;
    }
  }
  return isAccending;
}

int prime(){
  int maxPrime = -1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(isPrime(a[i][j]))
        maxPrime = max(maxPrime, a[i][j]);
    }
  }
  return maxPrime;
}

int main(){
  freopen("MTNT.inp", "r", stdin);
  freopen("MTNT.out", "w", stdout);

  input();

  bool isAccending;
  for(int i = 0; i < m; i++){
    if(accending(i) == true){
      isAccending = true;
      break;
    }
  }

  if(isAccending == true)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  cout << prime();
  
  return 0;
}