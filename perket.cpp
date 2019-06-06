#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>


using namespace std;

struct node {
	int s;
	int b;
}p[100000];

int ans = 1000000000;
int n;

int read() {
	int s = 0, f = 1;
	char c = getchar();
	while(c > '9' || c < '0') {
		if(c == '-') f = -1;
		c = getchar();
	}  
	while(c <= '9' && c >= '0') {
		s = s * 10 + c - '0';
		c = getchar();
	}
	return s * f;
}

void dfs(int i, int s, int b) {
	if(i > n) {
		if(b == 0) { //ÅĞ¶ÏÇåË® 
			return;
		}
		ans = min(abs(s-b),ans);
		return;
	}
	dfs(i+1,p[i].s * s,p[i].b + b);
	dfs(i+1,s,b);
	
}
int main() {
	n = read();
	for(int i = 1;i <= n;++i) {
		p[i].s = read();
		p[i].b = read();
	}
	dfs(1,1,0);
	cout<<ans<<endl;
	return 0;
}
