#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>


using namespace std;

int a[100007];
int main() {
	
	int n, d;
	cin>>n>>d;
	for(register int i = 0;i < n;++i) {
		cin>>a[i];	
	}
	sort(a,a+n);
	int ans = 0;
	for(int i = 0;i < n - 1;++i) {
		for(int j = i + 1;j < n;++j) {
			if(a[j] - a[i] > d) break;
			ans++; 
		}
	}
	cout<<ans<<endl;
	return 0;
}
