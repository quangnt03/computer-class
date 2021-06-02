#include <bits/stdc++.h>
using namespace std;
int N, k, d;

bool stop = 0;
string kq;
string s = "";
char ch;

int toInt(string x){
  int result;
  stringstream stream(x);
  stream >> result;
  return result;
}

bool kt_boi(string x){
	int so = toInt(x);
	return so > 0 && so % N == 0;
}

void timso(){
	for (int i = 0; i < k; i++){
		if (kq.length() < d){
		  kq = kq + s[i];
			if (kt_boi(kq) == 1){
				cout << kq;
				exit(0);
			}
			timso();
			kq.erase(kq.length() - 1, 1);
		}
	}
}

int main(){
	freopen("BOI.inp", "r", stdin);
	freopen("BOI.out", "w", stdout);
	cin >> N >> k;

	while (cin >> ch)
		if (ch >= '0' && ch <= '9')
			s = s + ch;

	for (int i = 0; i < s.length(); i++)
		for (int j = s.length() - 1; j >= i + 1; j--)
			if (s[j] < s[j - 1])
				swap(s[j], s[j - 1]);

	kq = "";
	for (d = 1; d <= 100; d++)
		timso();
	if (stop == 0)
		cout << 0;
	return 0;
}
