/*INPUT:
 DDTNDBBT
*/

#include <bits/stdc++.h>
#define p pair<int, int>
using namespace std;
const int X[4] = {-1,1,0,0};
const int Y[4] = {0,0,1,-1};

string s;
int a[1000][1000];
map<p, p> pre;
p start = make_pair(3,3);
p finish = start;


void input(){
	getline(cin, s);
	for(char &c : s){
		a[finish.first][finish.second] = 1;
		switch (c) {
			case 'D':{
				finish.second += 1;
				break;
			}
			case 'T':{
				finish.second -= 1;
				break;
			}
			case 'N':{
				finish.first += 1;
				break;
			}
			case 'B':{
				finish.first -= 1;
				break;
			}
		}
	}
	a[finish.first][finish.second] = 1;
}

void traces(){
	int d = 1;
	while(finish != start){
		d++;
		finish = pre[finish];
	}
	d++;
	cout << d;
	exit(0);
}

void dfs(int x, int y){
	a[x][y] = 0;
	for (int i = 0; i < 4; ++i) {
		int u = x + X[i];
		int v = y + Y[i];
		if(a[u][v] != 0){
			pre[p{u, v}] = p{x,y};
			if(p{u, v} == finish)
				traces();
			else
				dfs(u,v);
		}
	}
}

int main(){
	input();
	dfs(start.first, start.second);
	return 0;
}