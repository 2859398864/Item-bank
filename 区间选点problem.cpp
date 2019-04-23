/*
数轴上有n个闭区间[ai,bi]。取尽量少的点，
使得每个区间内都至少有一个点（不同区间内含的点可以是同一个）。

贪心策略：
按照b1<=b2<=b3…（b相同时按a从大到小）的方式排序排序，从前向后遍历，
当遇到没有加入集合的区间时，选取这个区间的右端点b。

*/
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include<iostream>
using namespace std;
struct node{
    int x;
    int y;
}p[1005];
 
int cmp (node a, node b) {
    return a.y < b.y;
}
int main() {
    int n;
    cin>>n;
    int ans = 1;
    int now;
    for(int i = 0;i < n;++i) {
    	cin>>p[i].x >>p[i].y ;
	}
	sort(p,p+n,cmp);
	now = p[0].y ;
	for(int i = 1;i < n;++i) {
		if(now < p[i].x ) {
			ans++;
			now = p[i].y ;
		}
	}
	cout<<ans<<endl;
    return 0;
}
