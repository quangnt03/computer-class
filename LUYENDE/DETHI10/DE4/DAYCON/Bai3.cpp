#include<bits/stdc++.h>
using namespace std;

int n,m;
string a,b,c;

void input(){
  char d;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> d;
    if(d != ' ')
      a.push_back(d);
  }
  cin >> m;
  for(int i = 0; i < m; i++){
    cin >> d;
    if(d != ' ')
      b.push_back(d);
  }
  c=a;
}

int main(){
  freopen("DAYCON.inp", "r", stdin);
  freopen("DAYCON.out", "w", stdout);
  input();

  for(int i = 0; i < m; i++){
    if(b.find(a[i]) == string::npos)
      a.erase(i,1);
  }
  if (a != b){
    cout << 0;
  }
  else{
    for(int i = 0; i < b.size(); i++){
      if(c[i]){
        int pos = c.find(b[i]);
        cout << pos+1 << " "; 
      }
    }
  }
  return 0;
}