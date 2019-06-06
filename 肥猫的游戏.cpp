#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<map>

using namespace std;


/*
和1个三角形相邻
和2个三角形相邻
和多个个三角形相邻

*/ 
struct node{
    int a[3];
}p[50000+5];

bool ans[50000+5];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-2;++i) {
    	for(int j=0;j<3;j++) {
    		scanf("%d",&p[i].a[j]);
		}  
	}    
    for(int j=0;j<3;++j) {
    	ans[p[0].a[j]] = true;
	}
        
    int s = 0;
    for(int i=1;i<n-2;++i){
        int t = 0;
        for(int j=0;j<3;++j)
            t += ans[p[i].a[j]];//判断三角形顶点是否为黑三角形顶点 
        if(t == 2) ++s;
    }
    if(s==1)  {
    	puts("JMcat Win");
	} else if(s == 2){
        if(n%2) {
        	puts("PZ Win");
		} else {
			puts("JMcat Win");
		}
    } else{
        if(n%2) {
        	puts("PZ Win");
		} else {
			puts("JMcat Win");
		}
    }
    return 0;
}
