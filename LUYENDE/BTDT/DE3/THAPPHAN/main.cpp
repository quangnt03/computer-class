#include <bits/stdc++.h>
using namespace std;

string divide(int num, int dem){
  if(num == 0)
    return "0";
  if(num % dem == 0)
    return to_string(num / dem);

  string result;
  if(num*dem < 0)
    result.insert(0,1,'-');
  num = abs(num);
  dem = abs(dem);
  result.insert(0,to_string(num/dem));
  num %= dem;
  result.insert(result.end(), ',');

  map<int, int> mp;
  mp.insert(make_pair(num, result.length()));

  while(num != 0) {
    num *= 10;
    result.insert(result.length(),to_string(num/dem));
    num %= dem;
    if(mp.find(num) != mp.end()){
      result.insert(mp[num], "(");
      result.push_back(')');
      break;
    }
    else
      mp.insert(make_pair(num, result.length()));
  }
  return result;
}

int main() {
  int m, n;
  cin >> m >> n;

  cout << divide(m, n);
  return 0;
}
