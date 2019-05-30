#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>


using namespace std;

int a[100007];
int b[100007];
int main() {
	
	int n;
	cin>>n;
	for(int i = 0;i < n;++i) {
		cin>>a[i];
	}
	for(int i = 0;i < n;++i) {
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	int flag = 0;
	for(int i = 0;i < n;++i) {
		if(a[i] > b[i]) {
			flag = 1;
			break;
		}
	}
	if(flag) {
		cout<<"NE"<<endl;
	} else {
		cout<<"DA"<<endl;
	}
	return 0;
}
