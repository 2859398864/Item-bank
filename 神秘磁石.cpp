#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>

using namespace std;

int is_prime[1000004];
int prime[1000004];
int cnt = 0;
int ss(int n) {
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
	
	int n, k;
	cin>>n>>k;
	int flag = 0;
	ss(n);
	for(int i = 0;i < cnt;++i) {
		int s = prime[i] + k;
		if(is_prime[s] && s <= n) {
			flag = 1;
			cout<<prime[i]<<" "<<s<<endl;
		}
	}
	if(!flag) {
		cout<<"empty"<<endl;
	}
	return 0;
}
