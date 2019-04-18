/*
输入正整数n,按从小到大的顺序输出所有形如abcde/fghij=n的表达式，
其中a~j恰好为数字0~9的一个排列，2<=n<=79

input
62

output
79546/01283=62
94736/01528=62

*/ 

#include <stdio.h>
#include<iostream>
using namespace std;
int main() {
    int n, x, y, temp;
    int i, j, flag;
    int is = 0;
    scanf("%d",&n);
    for(x = 12345;x <= 98765;x++) {
        int a[10] = {0};
        flag = 1;
        temp = x;
        if(x % n == 0) { //记录y的各个位
            y = x / n;
            for(i = 4;i >= 0;i--) {
                a[i] = y % 10;
                y = y / 10;
            }
        }
        for(i = 9;i >= 5;i--) {  //记录x的各个位 
            a[i] = temp % 10;
            temp = temp / 10;
            
        }
        for(i=0;i<9;i++) {  //判断有没有重复的 
            for(j=i+1;j<=9;j++) {
                if(a[i] == a[j]) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 0)
                break;
        }
        if(flag == 1) {
        	is = 1;
            for(i = 5;i <= 9;i++)
                printf("%d",a[i]);
            printf("/");
            for(i = 0;i < 5;i++)
                printf("%d",a[i]);
            printf("=%d\n",n);
        } 
    }
    if(!is) {
    	cout<<"-1"<<endl;
	}
    return 0;
}
