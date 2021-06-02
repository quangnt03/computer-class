#include<bits/stdc++.h>
using namespace std;

bool valid(int x){
  return x%10 - x%100/10 == x%100/10 - x/100 && x%10 - x%100/10 > 0;
}

int main(){
  for(int i = 100; i < 1000; i++)
    if(valid(i) && i%2 != 0)
      cout << i << " ";
  return 0;
}