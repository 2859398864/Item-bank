#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
/*

����һ������s������Ԫ������<=30��������˼��������Ӽ�Ԫ��֮�͡�
���Ժ����׵ķ���ÿ��Ԫ���ڼ����ж���������2^(n-1)�Ρ���ˣ����ǵõ�һ����ʽ��
��Ԫ�ظ���Ϊn������Ԫ��֮��Ϊsum���Լ�֮��Ϊans����

ans = sum * 2^(n-1)��
*/
int main() {
	int a[1000];
	int i = 0;
	long long sum = 0;
	while(cin>>a[i]) {
		sum += a[i];
		i++;
	}
	sum *= pow(2,i-1);
	cout<<sum<<endl;
	return 0;
}
