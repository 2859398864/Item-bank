#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>

using namespace std;

/*

�����������Խ��߽���һ�㣬���Թ�ĳһ����������ֻ���У����Խ���

���������Խ���ʵ������ȷ���ˣ������㣨Ҳ���Կ�����һ���ı��ε������Խ��߽���һ�㣬
���ı��ε���������

Ҳ���Ǵӣ��������ȡ����������

���ڸı��ĸ����˳�򲻻�ı�Խ��ߣ�����������϶��������У�Ҳ��Ҫ���ԣ�����
��Լ������long long���˼�λ����׼����һ���߾�����ͻȻ������unsigned long long��
�����ü���������һ��100000�Ĵ𰸣����������ڷ�Χ����
*/

int main() {
	
	unsigned long long n;
	scanf("%lld",&n);
	unsigned long long ans = n * (n-1) / 2 * (n - 2) / 3 * (n - 3 ) / 4;
	printf("%lld\n",ans);
	return 0;
}
