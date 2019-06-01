#include<iostream>
#include<cmath>
#include<cstring>


using namespace std;

/*

我们可以将绿灯和红灯所耗时间计为一组，
再把当前所耗的时间去除这个一组的和，便可以得当发车时候，
这个路口红灯绿灯变换了多少次。
而他们的余数（余数就是在当前路口需要等待的红灯+绿灯的时间）与
这个绿灯的秒数所判断，如果余数大于绿灯那么一定说明当前在路口的时候是红灯，
需要等待，算出需要等待的时间为当前路口的绿灯时间差：
即绿灯时间+红灯时间-在当前路口需要等待的红灯+绿灯的时间（就是那个余数）
否则就在路口的时候是绿灯，可以直接通过。

*/
struct node {
	int g;
	int r;
	
}p[100005];

int dis[100005];


int main() {
	
	int n, m;
	cin>>n>>m;
	for(int i = 0;i < n - 1;++i) {
		cin>>dis[i];
	}
	for(int i = 0;i < n;++i) {
		cin>>p[i].r ;
	}
	for(int i = 0;i < n;++i) {
		cin>>p[i].g ;
	}
	int t = m;
	int ans[100005];
	for(int i = 0;i < n;++i) {
		if(i >= 1) {
			t += dis[i-1];
		} 
		int k = p[i].g + p[i].r ;
		if(t % k <= p[i].g) {
			ans[i] = t;
		} else {
			t += k - t % k;
			ans[i] = t;
			
		}
	}
	for(int i = 0;i < n;++i) {
		cout<<ans[i]<<endl;
	}
	return 0;
}
