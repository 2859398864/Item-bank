#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>

using namespace std;

/*

不会有三条对角线交于一点，所以过某一个交点有且只能有２条对角线

而这两条对角线实质上是确定了４个顶点（也可以看做是一个四边形的两条对角线交于一点，
求四边形的数量）。

也就是从ｎ个顶点中取４个出来。

由于改变四个点的顺序不会改变对角线，因此是求的组合而不是排列，也就要除以４！，
大约估摸比long long大了几位，本准备打一波高精，但突然想起了unsigned long long，
于是用计算器算了一下100000的答案，发现正好在范围里面
*/

int main() {
	
	unsigned long long n;
	scanf("%lld",&n);
	unsigned long long ans = n * (n-1) / 2 * (n - 2) / 3 * (n - 3 ) / 4;
	printf("%lld\n",ans);
	return 0;
}
