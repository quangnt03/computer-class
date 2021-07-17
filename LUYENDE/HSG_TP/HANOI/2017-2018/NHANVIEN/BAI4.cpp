#include<bits/stdc++.h>
using namespace std;

int n;
int d = 1;
vector<vector<int>> a(n);

void input(){
  cin >> n;
  int u;
  for (int i = 1; i <= n-1; i++){
    cin >> u;
    a[u].push_back(i);
  }
}

int backTrack(int i){
  for(int j = 0; j < a[i].size(); j++){
    cout << d << endl;
    d = d * backTrack(a[i][j]);
  }
  return d + 1;
}

int main(){
  freopen("BAI4.inp", "r", stdin);
  input();
  cout << backTrack(n-1);
  return 0;
}