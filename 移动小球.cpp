/*
����һЩС�򣬴��������α��Ϊ1,2,3,...,n. �����ִ������ָ�A����B����
���У� A X Y��ʾ��С��X�ƶ���С��Y����ߣ� B X Y��ʾ��С��X�ƶ���С��Y�ұߡ� 
ָ�֤�Ϸ�����X������Y�� 
���磬��ʼ״̬1,2,3,4,5,6��С��ִ��A 1 4��С��1���ƶ���С��4����ߣ�
��2,3,1,4,5,6��
�����ִ��B 3 5�����3�����Ƶ�5���ұ�
��2,1,4,5,3,6

����:

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
 
Node a[SIZE];	//�±����������¼������������ 
 
int main () {
	
	int n,m;
	int i,j;
	
	scanf("%d%d", &n, &m);
 
	for(i = 0; i < n; i ++){	//��ʼ�� 
		a[i].left = i - 1;
		a[i].right = i + 1;
	}
	
	char t[5];
	int b,c;
	
	for(i = 0; i < m; i ++){
		scanf("%s%d%d", t, &b, &c);	
		
		if(t[0] == 'A'){
			a[a[b].left].right = a[b].right;	//b���룬b������������ָ�� 
			a[a[b].right].left = a[b].left;
 
			a[b].left = a[c].left;	//b�����ָ�� 
			a[b].right = c;
 
			a[a[c].left].right = b;	//b��Ŀ��λ�ӵ���������ָ�� 
			a[c].left = b;
			
		} else {
			a[a[b].left].right = a[b].right;	//ͬ�� 
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
		printf("%d ", k);  //ԭ�ȵ�a[i].right�����ʲô 
						   //�±�i����� �ı����i��right��ֵ 
		count ++;
	}
	
	return 0;
}

