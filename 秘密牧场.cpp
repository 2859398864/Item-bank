#include<cstdio>
#include<cmath>
int n, ans;
void DFS(int x,int s) {
    if(x == 4) {
    	if(s == n) {
    		ans++;
		}
	} else {
		for(int i = 0;i <= sqrt(n);i++) {
			DFS(x+1,s+i*i);
		}
	}
}
int main()
{
    scanf("%d",&n);
    DFS(0,0);
    printf("%d",ans);
    return 0;
}
