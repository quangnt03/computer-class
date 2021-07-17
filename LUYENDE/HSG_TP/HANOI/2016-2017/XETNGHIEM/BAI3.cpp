#include<bits/stdc++.h>
using namespace std;

bool disease[100];
int a[100][100];
vector<vector<int>> group;
int m, n;

void input(){
  cin >> m >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++)
      cin >> a[i][j];
    cin >> disease[i];
  }
}

int main(){
  freopen("BAI3.inp", "r", stdin);
  // freopen("BAI2.out", "w", stdout);
  input();
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(disease[i] == 1){
        if(a[i][j] == 1)
          group[i].at(j) += 1;
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < group[i].size(); j++){
      cout << a[i][j] << ' ';
    }
  }

}