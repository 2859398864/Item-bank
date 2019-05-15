#include<iostream>
#include<algorithm>
using namespace std;
struct node {
	int num;
	int maxn;
}p[10000];
int cmp(node a, node b) {
	return a.maxn > b.maxn;
}
int main() {
	int a[10000];
	int n, m;
	cin>>n>>m;
	for(int i = 0;i < m;++i) {
		cin>>a[i];
	}
	sort(a,a+m);
	for(int i = 0;i < m;++i) {
		p[i].num = a[i];
		p[i].maxn = a[i] * (m - i);
	}
	sort(p,p+m,cmp);
	cout<<p[0].num <<" "<<p[0].maxn <<endl;
	return 0;
}
