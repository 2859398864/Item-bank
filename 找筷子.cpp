#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>


using namespace std;

int main() {
	
	int n;
	cin>>n;
	int ans;
	for(int i = 0;i < n;++i) {
		int a;
		cin>>a;
		if(i == 0) {
			ans = a;
		} else {
			ans ^= a;
		}
	}
	cout<<ans<<endl;
	return 0;
}
