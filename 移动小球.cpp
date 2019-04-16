/*
你有一些小球，从左到右依次编号为1,2,3,...,n. 你可以执行两种指令（A或者B）。
其中， A X Y表示把小球X移动到小球Y的左边， B X Y表示把小球X移动到小球Y右边。 
指令保证合法，即X不等于Y。 
例如，初始状态1,2,3,4,5,6的小球执行A 1 4后，小球1被移动到小球4的左边，
即2,3,1,4,5,6。
如果再执行B 3 5，结点3将会移到5的右边
即2,1,4,5,3,6

样例:

6 2
A 1 4
B 3 5

2 1 4 5 3 6 
*/
#include<stdio.h>
#include<iostream>
#define SIZE 50
using namespace std;

typedef struct node{
	int left;
	int right;
}Node; 
 
Node a[SIZE];	//下标代表数，记录的左右相邻数 
 
int main () {
	
	int n,m;
	int i,j;
	
	scanf("%d%d", &n, &m);
 
	for(i = 0; i < n; i ++){	//初始化 
		a[i].left = i - 1;
		a[i].right = i + 1;
	}
	
	char t[5];
	int b,c;
	
	for(i = 0; i < m; i ++){
		scanf("%s%d%d", t, &b, &c);	
		
		if(t[0] == 'A'){
			a[a[b].left].right = a[b].right;	//b撤离，b的左右相邻数指向 
			a[a[b].right].left = a[b].left;
 
			a[b].left = a[c].left;	//b自身的指向 
			a[b].right = c;
 
			a[a[c].left].right = b;	//b的目标位子的相邻数的指向 
			a[c].left = b;
			
		} else {
			a[a[b].left].right = a[b].right;	//同上 
			a[a[b].right].left = a[b].left;
			
			a[b].left = c;
			a[b].right = a[c].right;
			
			a[a[c].right].left = b;
			a[c].right = b;
			
		}
	}
	int count = 1;
	int k = 0;
	while(1){
		k = a[k].right;
		if(count > n) {
			break;
		}
		printf("%d ", k);  //原先的a[i].right存的是什么 
						   //下表i不会变 改变的是i的right的值 
		count ++;
	}
	
	return 0;
}

