#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	long long sum = 0;
	long long sum1 = 0;
	long long sum2 = 0;
	for(register int i = 0;i < n;++i) {
		int a;
		scanf("%d",&a);
		sum1 += a;
	}
	for(register int i = 0;i < n;++i) {
		int b;
		scanf("%d",&b);
		sum2 += b;
	}
	sum = sum1 - sum2;
	
	double ans = (sum1 * 3.0 - sum2 * 2.0) / (double)sum;
	printf("%.6lf",ans);
	return 0;
}
