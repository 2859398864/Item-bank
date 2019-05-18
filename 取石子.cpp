#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long sum = 0;
    for(int i = 0;i < n;++i) {
    	int a;
    	cin>>a;
    	sum += a;
	}
	if(sum % 2 == 0) {
		cout<<"Bob"<<endl;
	} else {
		cout<<"Alice"<<endl;
	}
}
