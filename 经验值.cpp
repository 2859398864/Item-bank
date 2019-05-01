#include<iostream>
using namespace std;
inline int qpow(long long a, long long b) {
	long long ans = 1, base = a;
	while(b > 0) {
		if(b & 1) {
			ans *= base;
		}
		base *= base;
		b >>= 1;
	} 
	return ans;
}
int main(){
	int n;
	cin>>n;
	double sum = 10;
	double jy = 0;
	for(int i = 0;i < n;++i) {
		double x;
		double a;
		cin>>x>>a;
		sum -= x;
		if(sum <= 0) {
			break;
		} 
		jy += a;
		if(sum > 10) {
			sum = 10;
		}
	}
	long long num = 0;
	int ans = 0;
	for(int i = 0; ;++i) {
		double a = qpow(2,i);
		if(jy - a < 0) {
			break;
		} else {
			jy -= a;
			ans++;
		}
	}
	cout<<ans<<" "<<jy<<endl;
	return 0;
} 
