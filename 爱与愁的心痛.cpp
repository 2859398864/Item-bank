#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int f[3001],ct[3001]; //Ç°×ººÍ 
int tree[500100];
int n, m;
int lowbit(int x){
    return x & -x;
}
void add(int x,int k){
    while(x<=n){
        tree[x]+=k;
        x+=lowbit(x);
    }
}
int sum(int x){
    int ans=0;
    while(x!=0){
        ans+=tree[x];
        x-=lowbit(x);
    }
    return ans;
}
int main(){
    /*
    memset(f,0,sizeof(f));
    int n, m, minn = 0xfffffff;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>ct[i];
        f[i]=f[i-1]+ct[i];
    }
    for(int i=m;i<=n;i++){
        minn=min(minn,f[i]-f[i-m]);
    }
    cout<<minn;
    */
    int minn = 21314112;
    cin>>n>>m;
    for(int i = 1;i <= n;++i) {
    	int a;
    	cin>>a;
    	add(i,a);
	}
	for(int i = m;i <= n;++i) {
		minn = min(minn,sum(i) - sum(i-m));
	}
	cout<<minn<<endl;
    return 0;
}

