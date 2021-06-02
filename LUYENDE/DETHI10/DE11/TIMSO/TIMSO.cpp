#include<bits/stdc++.h>
using namespace std;

int n;
char x[100];
string s1 = "68"; 

void print(){
  int n6 = 0, n8 = 0;
  for(int i = 0; i < n; i++){
    if(x[i] == '0'){
      n6++;
    }
    if(x[i] == '1'){
      n8++;
    }
  }
  if(n6 > n8){
    for(int i = 1; i <= n; i++){
      if(x[i] == '0')
        cout << "6"; 
      if(x[i] == '1')
        cout << "8"; 
    }
    cout << endl;
  }
}

void backTrack(int k){
  for(int i = 0; i <= 1; i++){
    x[k] = i;
    if(k == n)
      print();
    else
      backTrack(k+1);
  }
}

int main(){
  cin >> n; 
  backTrack(1);
  return 0;
}