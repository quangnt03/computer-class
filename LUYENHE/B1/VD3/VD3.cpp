#include<bits/stdc++.h>
using namespace std;

int n;
int a[100][100];
bool visited[4] = {false};

vector <int> stp;
vector <int> cp;
int step = 0;
int minStep = 10000000;

void input(){
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];
}

bool isDestination(){
  for(int i = 0; i < n; i++){
    if(!visited[i])
      return false;
  }
  return true;
}

void print(){
  cout << minStep << endl;
  for(int p : stp)
    cout << p + 1 << "->";
  cout << 1;
  exit(0);
}

void update(){
  step = 0;
  if(cp[0] == 0){
    for (int p = 0; p < cp.size() - 1; p++)
      step += a[cp[p]][cp[p + 1]];
    step += a[cp[cp.size() - 1]][0];
    if(step < minStep){
      minStep = step;
      stp = cp;
    }
  } else
    print();
}

void findPath(int s) {
  for (int i = 0; i < n; ++i){
    if(!visited[i]) {
      visited[i] = true;
      cp.push_back(i);
      if (isDestination()){
        update();
      }
      else
        findPath(i);
      visited[i] = false;
      cp.pop_back();
    }
  }
}

int main(){
  freopen("VD3.inp", "r", stdin);
  freopen("VD3.out", "w", stdout);
  input();
  findPath(0);
  return 0;
}