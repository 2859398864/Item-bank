/*
��������n��������[ai,bi]��ȡ�����ٵĵ㣬
ʹ��ÿ�������ڶ�������һ���㣨��ͬ�����ں��ĵ������ͬһ������

̰�Ĳ��ԣ�
����b1<=b2<=b3����b��ͬʱ��a�Ӵ�С���ķ�ʽ�������򣬴�ǰ��������
������û�м��뼯�ϵ�����ʱ��ѡȡ���������Ҷ˵�b��

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
