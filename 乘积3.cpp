#include<iostream>
using namespace std;
/*
���ǿ����Ȱ�N����M���������M��������С1�ģ�
Ȼ���ٰ�N%M������м���Ӧ�ö�1���������
*/
int main(){
	long long n, m;
	cin>>n>>m;
	long long a = n / m;
	long long b = n % m;
	for(long long i = b;i < m;++i) {
		cout<<a<<" ";
	}
	for(long long i = 0;i < b;++i) {
		cout<<a+1<<" ";
	}
	return 0;
} 
