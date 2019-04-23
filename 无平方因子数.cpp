/*
����������n��m������[n,m]�ڵġ���ƽ�����ӡ������ж��ٸ���
����p��ƽ�����ӵ��ҽ���������k > 1,
ʹ��p��k * k�ı�����1 <= n <= m <= 10 ^ 12,m - n <= 10 ^ 7

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
