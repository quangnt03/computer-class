#include <iostream>
using namespace std;

int stringToNumber(string s){
  int result = 0;
  for (int i = 0; i < s.size(); ++i) {
    result = result*10 + int(s[i] - 48);
  }
  return result;
}

int main() {
  string s;
  getline(cin,s);
  cout << stringToNumber(s);
  return 0;
}
