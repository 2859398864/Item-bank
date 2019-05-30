#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;


int vis[100000004 * 2];
int main() {
	
	int n;
	cin>>n;
	int t;
	for(int i = 0;i < n;++i) {
		int a;
		cin>>a;
		if(i == 0) {
			t = a;	
		} else {
			t = abs(t - a);
			vis[t] = 1;
			t = a;
		}
	}
	int flag = 0;
	for(int i = 1;i <= n - 1;++i) {
		if(!vis[i]) {
			flag = 1;
			break;
		}
	}
	if(!flag) {
		cout<<"Jolly"<<endl;
	} else {
		cout<<"Not jolly"<<endl;
	}
	return 0;
}
