/*
	��һ������n����������һ�����л��ֳ�m��������������
	���������������S��i�������ֵ����С��
	���� 1 2 3 2 5 4 ���ֳ�3������������
	���ŷ���Ϊ 1 2 3 | 2 5 | 4
	��1 2 | 3 2 | 5 4 ���ֵΪ9 ����ղź�
	 
	�����ֵ����С����һ�ֺܳ������Ż��ձꡣ���ǿ���һ���µ����⣺
	���ǰ��������Ĵ���ν��P(x)��ʾ�� ����P(x)Ϊ�����Сֵx����ԭ��Ĵ�
	P(x)���Ѽ��㣬ÿ�ξ������һ��� 

	���Բ������ˡ�����һ��x0�ģ����P(xo)Ϊ�٣���ô�𰸱�x0��
	���P(x0)Ϊ�棬 ��ô��С�ڵ���x0
 
������x����һֱ���������ƣ����ڵĻ��ͼ�һ����
*/
#include<iostream>
using namespace std;
const int maxn=1e6+10;

int a[maxn];
int n,m;

int is_true(int x) {
    int s=0;
    int t=0;
    for(int i=0;i<n;i++){
        if(a[i]>x)
            return 0;
        if(s+a[i]>x){	
            s=a[i];
            t++;
            if(t>m-1)
                return 0;
        } else {
        	s+=a[i];
		}
    }
    return 1;
}
int solve() {
    int x=0,y=0;
    for(int i=0;i<n;i++){
        y+=a[i];
    }
    while(x<y){
        int m = x + (y-x)/2;
        if(is_true(m)) {
        	y=m;
		} else {
			 x=m+1;
		}
               
    }
    return x;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) {
    	scanf("%d",&a[i]);
	}
    int ans=solve();
    cout<<ans<<endl;
    return 0;
}
