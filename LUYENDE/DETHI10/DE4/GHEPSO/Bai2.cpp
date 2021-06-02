#include<bits/stdc++.h>
using namespace std;

string str[100];
int n;

void input(){
  int temp;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> temp;
    str[i] = to_string(temp);
  }
}

int main(){
  freopen("NUMJOIN.inp", "r", stdin);
  freopen("NUMJOIN.out", "w", stdout);
    
  input();
  sort(str, str + n, greater<string>());
  for(int i = 0; i < n; i++)
    cout << str[i]; 
  return 0;
}