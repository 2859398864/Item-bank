#include <iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;

int f[10005];
int ans(int n) {
	f[0] = 0;
	int day = 1;
	int num = 1;
	for(int i = 1;i <= n;++i) {
		if(day) {
			f[i] = f[i-1] + num;
			day--;
		} else {
			num++;
			day = num;
			f[i] = f[i-1] + num;
			day--;
		}
	}
	return f[n];
}
int main() {
	int n;
	
	cin>>n;
	cout<<ans(n)<<endl;
    return 0;
}
