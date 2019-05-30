#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>


using namespace std;

int a[100007];
int main() {
	
	int n;
	cin>>n;
	for(int i = 0;i < n;++i) {
		cin>>a[i];
	}
	sort(a,a+n);
	int high = a[n-1];
	
	int ans = n + 10 * high;

	int s = unique(a,a+n)-a;//计算不重复楼层的数目 
	for(int i = 0;i < s;++i) {
		if(a[i]) ans += 5;
	}
	cout<<ans<<endl;
	return 0;
}
