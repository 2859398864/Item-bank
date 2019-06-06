#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>

using namespace std;

char map[104][104];
int ans[104][104];

int fx[9] = {0, -1, 0, 1, -1, 1, -1, 0, 1};
int fy[9] = {0, -1, -1, -1, 0, 0, 1, 1, 1};
int n, m;

void dfs(int x, int y) {
	int xx, yy;
	for(int i = 1;i <= 8;++i) {
		xx = x + fx[i];
		yy = y + fy[i];
		if(map[xx][yy] == '*' && xx >= 1 && xx <= n && yy >= 1 && yy <= m) {
			ans[x][y]++;
		}
	}
}
int main() {
	
	cin>>n>>m;
	for(int i = 1;i <= n;++i) {
		for(int j = 1;j <= m;++j) {
			cin>>map[i][j];
		}
	}
	for(int i = 1;i <= n;++i) {
		for(int j = 1;j <= m;++j) {
			if(map[i][j] != '*') {
				dfs(i,j);
				cout<<ans[i][j];
			} else {
				cout<<"*";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
