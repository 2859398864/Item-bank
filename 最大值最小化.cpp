/*
	把一个包含n个正整数的一个序列划分成m个连续的子序列
	你的任务是让所有S（i）的最大值尽量小。
	例如 1 2 3 2 5 4 划分成3个连续子序列
	最优方案为 1 2 3 | 2 5 | 4
	若1 2 | 3 2 | 5 4 最大值为9 不如刚才好
	 
	“最大值尽量小”是一种很常见的优化日标。我们考虑一个新的问题：
	我们把这个问题的答案用谓词P(x)表示， 则让P(x)为真的最小值x就是原题的答案
	P(x)不难计算，每次尽量往右划分 

	可以猜数字了—随便猜一个x0的，如果P(xo)为假，那么答案比x0大
	如果P(x0)为真， 那么答案小于等于x0
 
不大于x，就一直把线往后移，大于的话就加一条线
*/
#include<iostream>
using namespace std;
const int maxn=1e6+10;

int a[maxn];
int n,m;

int is_true(int x) {
    int s=0;
    int t=0;
    for(int i=0;i<n;i++){
        if(a[i]>x)
            return 0;
        if(s+a[i]>x){	
            s=a[i];
            t++;
            if(t>m-1)
                return 0;
        } else {
        	s+=a[i];
		}
    }
    return 1;
}
int solve() {
    int x=0,y=0;
    for(int i=0;i<n;i++){
        y+=a[i];
    }
    while(x<y){
        int m = x + (y-x)/2;
        if(is_true(m)) {
        	y=m;
		} else {
			 x=m+1;
		}
               
    }
    return x;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) {
    	scanf("%d",&a[i]);
	}
    int ans=solve();
    cout<<ans<<endl;
    return 0;
}
