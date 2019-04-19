#include<iostream>
#include<string.h>
using namespace std;
int a[10];
void ans(int x) {
	while(x) {
		int d = x % 10;
		a[d]++;
		x /= 10;
	}
}
int main() {
	int t;
	cin>>t;
	for(int i = 0;i < t;++i) {
		int num;
		cin>>num;
		memset(a,0,sizeof(a));
		for(int j = 1;j <= num;++j) {
			ans(j);
		}
		for(int j = 0;j < 10;++j) {
			if(j == 0) {
				cout<<a[j];
			} else {
				cout<<" "<<a[j];
			}
		}
		cout<<endl;
	}	
	return 0;
}
