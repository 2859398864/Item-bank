/*
����n��Ԫ����ɵ�����S�� ����Ҫ�ҳ�һ���˻��������������С�
�������˻�����������Ӧ���-1. 
1 <= n <= 18    -10 <= s(i) <= 10 

input
3
2 4 -3

5
2 5 -1 2 -1

output
8
20

*/
//����������������Ҫ�أ������յ� 
#include<iostream>
#include<cstdio>
using namespace std;
const int maxn = 20;
int a[maxn];
int main() {
    int N, i, j, t, ant = 0;
    long long k, max;
    while(scanf("%d",&N) != EOF) {   
        ant++;
        for(i = 0; i < N; i++)
            cin>>a[i];
        max = 0;
        for(i = 0;i < N;++i) {   
            for(j = i;j < N;j++) {   
			 	k = 1;
                for(t = i;t <= j;t++)
                    k *= a[t];
                 if(max < k) {
                 	max = k;
				 }              
             }
         }
         if(max < 0) {
         	cout<<"-1"<<endl;
		 } else {
		 	cout<<max<<endl;
		 }
     }
     return 0;
 }

