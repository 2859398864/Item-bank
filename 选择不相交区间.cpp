/*
��������n��������(ai,bi)������ѡ�������䣬ʹ����Щ��������û�й�����
����bi��С�����˳�����������
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

