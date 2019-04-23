/*
给出正整数n和m，区间[n,m]内的“无平方因子”的数有多少个？
整数p无平方因子当且仅当不存在k > 1,
使得p是k * k的倍数。1 <= n <= m <= 10 ^ 12,m - n <= 10 ^ 7

*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAXN 100000000
int vis[MAXN]; 
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m) != EOF){
		 int count = 0;
	     int k = sqrt(m + 0.5);
	     memset(vis,0,sizeof(vis));
		 for(int i = 2; i <= k; i++){
		 	for(int j =i * i; j <= m;j += i * i){
		 		if(j >= n){
		 			if(!vis[j]) {
		 				count++;
					 }
			 		vis[j] = 1;
		 		}
			 }
		 }
		 printf("%d\n",m - n + 1 - count);
	} 
	return 0;
}
