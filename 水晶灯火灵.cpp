#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

/*
记f(n,m)=(n^2-mn-m^2)^2

则有f(m+n,n)=[(m+n)^2-n(m+n)-n^2]^2=(m^2+mn-n^2)^2=(n^2-mn-m^2)^2=f(n,m)

易得f(1,1)=1

故1=f(1,1)=f(2,1)=f(3,2)=...

发现m,n是Fibonacci数列相邻的两项，那么问题就极易解答了

n是数列中小于等于k的最大值
*/
int a[10000];

int main() {
	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
	int m = 2;
	int k;
	cin>>k;
	
	while(a[m] <= k) {
		m++;
		a[m] = a[m-1] + a[m-2];
	}
	cout<<"m="<<a[m-2]<<endl;
	cout<<"n="<<a[m-1]<<endl;
	return 0;
}
