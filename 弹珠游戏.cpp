#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[1000][1000];
inline int read() {
	register int x = 0, f = 1;
	char c = getchar();
	while(c < '0' || c > '9') {
		if(c == '-') f = -1;
		c = getchar();
	}
	while(c >= '0' && c <= '9') {
		x = x * 10 + c - '0';
		c = getchar();
	}
	return x * f;
}
int main(){
    int n;
    n = read();
    for(int i = 0;i < n;++i) {
    	for(int j = 0;j < n;++j) {
    		a[i][j] = read();
		}
	}
	if(n == 1) {
    	cout<<"0"<<endl;
    	return 0;
	}
	
	long long maxn = 0, sum = 0;
	for(int i = 0;i < n;++i) {
		for(int j = 0;j < n;++j) {
			if(!a[i][j]) {
				sum = 0;
				for(int m = 0;m < n;++m) {
					sum += a[i][m];
					sum += a[m][j];
				}
				maxn = maxn > sum ? maxn : sum;
			}
		}
	}
	if(maxn == 0) {
		cout<<"Bad Game!"<<endl;
	} else {
		cout<<maxn<<endl;
	}
    return 0;
}
