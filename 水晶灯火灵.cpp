#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

/*
��f(n,m)=(n^2-mn-m^2)^2

����f(m+n,n)=[(m+n)^2-n(m+n)-n^2]^2=(m^2+mn-n^2)^2=(n^2-mn-m^2)^2=f(n,m)

�׵�f(1,1)=1

��1=f(1,1)=f(2,1)=f(3,2)=...

����m,n��Fibonacci�������ڵ������ô����ͼ��׽����

n��������С�ڵ���k�����ֵ
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
