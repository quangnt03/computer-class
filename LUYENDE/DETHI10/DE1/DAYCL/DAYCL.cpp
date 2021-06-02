#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  vector<int> odd;
  vector<int> even;

  freopen("DAYCL.inp", "r", stdin);
  freopen("DAYCL.out", "w", stdout);
  cin >> x;

  while(x/10 != 0){
    int a = x%10;
    if (a%2 == 0)
      even.push_back(a);
    else
      odd.push_back(a);
    x /= 10;
  }
  if(x%10 == 0)
    even.push_back(x);
  else
    odd.push_back(x);

  sort(odd.begin(), odd.end());
  sort(even.begin(), even.end(), greater<int>());

  for(int i : odd)
    cout << i;

  for (int i : even)
    cout << i;
  
  return 0;
}
