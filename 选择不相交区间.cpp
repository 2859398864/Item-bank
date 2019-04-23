/*
数轴上有n个开区间(ai,bi)。尽量选择多个区间，使得这些区间两两没有公共点
按照bi从小到大的顺序给区间排序
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
    int before;
    for(int i = 0;i < n;++i) {
    	cin>>p[i].x >>p[i].y ;
	}
	sort(p,p+n,cmp);
	before = p[0].y;
	for(int i = 1;i < n;++i) {
		if(p[i].x  >= before) {
			before = p[i].y ;
			ans++;
		}
	}
	cout<<ans<<endl;
    return 0;
}

