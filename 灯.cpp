#include<iostream>
#include<cmath>

using namespace std;



int main() {
	
	int n;
	cin>>n;
	int ans = 0;
	while(n--) {
		double a;
		int t;
		cin>>a>>t;
		for(int i = 1;i <= t;++i) {
			int k = int(a*i);
			ans ^= k;
		}
	}
	cout<<ans<<endl;
	return 0;
}
