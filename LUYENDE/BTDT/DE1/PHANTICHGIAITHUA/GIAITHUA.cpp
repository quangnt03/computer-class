#include<bits/stdc++.h>
#define LIMIT 1000
using namespace std;

int n;
int nC[LIMIT] = {0};
bool isPrime[LIMIT];

void sieve() {
  memset(isPrime, true, sizeof(isPrime));
  isPrime[0] = false;
  isPrime[1] = false;
  for(int i = 2; i * i <= LIMIT; ++i) {
    if(isPrime[i] == true) {
      for(int j = i*i; j <= LIMIT; j += i)
        isPrime[j] = false;
    }
  }
}

void PhanTich(int x){
  for(int i = 2; i <= x; i++){
    if(x < 2)
      break;
    while(x%i == 0){
      nC[i]++;
      x /= i;
    }
  }
}

int main(){
  cin >> n;
  sieve();
  for(int i = 2; i <= n; i++)
    PhanTich(i);
  
  for(int i = 2; i <= n; i++)
    if(isPrime[i])
      cout << nC[i] << " ";
  return 0;
}