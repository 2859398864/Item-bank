#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int ans(int x) {
	int sum = 0;
	for(int i = 1;i < x;++i) {
    	if(x % i == 0) {
    		sum += i;
		}
	}
	return sum;
}
int main() {
    int n;
    cin>>n;
    while(1) {
    	int a = n;
    	int t = ans(a);
    	if(ans(t) == a && a != t) {
    		cout<<a<<" "<<t<<endl;
			break; 
		}
		n++;
	}
    return 0;
}
