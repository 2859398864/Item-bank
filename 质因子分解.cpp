#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>


using namespace std;

/*
��100��������

�������ǰ����лṱ�������ӵ����г����Ļ�������������

1,2,3,4,5,6 ���� 97,98,99,100
���ǲ�����һ�룬�⵱������Щ�ṱ��һ��2�� �г����Ļ�������������

2 , 4 , 6 ���� 98 , 100
���Կ���������ռ��[ n/2 ]����

����Щ���У����м��������ٹ���һ��2��

4, 8, 12 ���� 96, 100
Ҳ���Կ�����ռ��[n/2^2]����

���������׿�����Ϊ100�����׵�2���У� [n/2]+[n/2^2]+[n/2^3]+����
2
������Ȼ�Ǹ��������У�����һ��2^k>n �����ȫ��0��

�������ǽ������[n/2]+n[n/2^2]+����+[n/2^{k-1}][n/2]+n[n/2^2]+����+[n/2^k-1]���ɡ�

*/
int is_prime[100005];
int prime[100005];
int cnt;
void ss(int n) {
	memset(is_prime,1,sizeof(is_prime));
	is_prime[0] = 0;
	is_prime[1] = 0;
	for(int i = 2;i <= n;++i) {
		if(is_prime[i]) {
			prime[cnt++] = i;	
		}
		for(int j = 0;j < cnt && i * prime[j] <= n;++j) {
			is_prime[i * prime[j]] = 0;
			if(i % prime[j] == 0) break;
		}
	}
}

int main() {
	
	int n;
	cin>>n;
	ss(n);
	for(int i = 0;i < cnt;++i) {
		int count = 0, p = prime[i], base = n;
		while(base) {
			base /= p;
			count += base;
		} 
		cout<<p<<" "<<count<<endl;
	}
	
	return 0;
}
