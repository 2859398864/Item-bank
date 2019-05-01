#include<iostream>
using namespace std;
/*
我们可以先把N除以M，算出后面M个数字中小1的，
然后再把N%M，算出有几个应该多1，挨个输出
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
