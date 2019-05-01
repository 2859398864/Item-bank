#include<iostream>
#include<cstdio>
using namespace std;
const int size=5002;
int x1[size], y1[size], x2[size], y2[size];
int main() {
    int n, m, askx, asky;
    scanf("%d %d",&n,&m);   
    for(int i = 1; i <= n; i++)
        scanf("%d %d %d %d",&x1[i],&y1[i],&x2[i],&y2[i]);
    int ans = 0,last = 0;        
    for(int i = 1; i <= m; i++) {
        ans=0;
        scanf("%d %d",&askx,&asky);
        for(int j = 1; j <= n; j++) {      
            if(askx >= x1[j] && askx <= x2[j]) {
                if(asky >= y1[j] && asky <= y2[j]) {
                    ans++;
                    last = j;
                }
            }
        }
        if(!ans) {
        	 puts("NO");   
		}
        else {
        	 printf("YES %d %d\n",ans,last);   
		}     
    }
    return 0;
}
