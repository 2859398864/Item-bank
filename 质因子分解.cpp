#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>


using namespace std;

/*
以100！举例）

假如我们把所有会贡献质因子的数列出来的话，就是这样：

1,2,3,4,5,6 …… 97,98,99,100
我们不妨想一想，这当中有哪些会贡献一个2？ 列出来的话，就是这样：

2 , 4 , 6 …… 98 , 100
可以看到，正好占了[ n/2 ]个。

那这些数中，又有几个数会再贡献一个2？

4, 8, 12 …… 96, 100
也可以看出，占了[n/2^2]个。

这样就容易看出，为100！贡献的2共有： [n/2]+[n/2^2]+[n/2^3]+……
2
这样虽然是个无穷数列，但是一旦2^k>n 后面就全是0。

所以我们仅需计算[n/2]+n[n/2^2]+……+[n/2^{k-1}][n/2]+n[n/2^2]+……+[n/2^k-1]即可。

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
