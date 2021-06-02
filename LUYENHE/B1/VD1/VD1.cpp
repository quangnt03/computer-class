#include<bits/stdc++.h>
using namespace std;

int a[100];
int p[100] = {1};
int uniqueN = 1;
int maxFrequency = -100, pos = 1;
int n;

void input(){
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
}

int main(){
  freopen("VD1.inp", "r", stdin);
  input();
  for(int i = 1; i < n; i++){
    if(a[i] == a[i-1])
      p[i] = p[i-1] + 1;
    else
      p[i] = 1;
  }
  for(int i = 0; i < n; i++){
    if(p[i] == 1)
      uniqueN++;
    if(p[i] > maxFrequency){
      maxFrequency = p[i];
      pos = i;
    }
  }
  cout << uniqueN << endl;
  cout << pos - maxFrequency + 2 << " " << pos + 1;
  return 0;
}