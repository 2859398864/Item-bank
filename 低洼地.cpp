#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>


using namespace std;

int array[1000000];
int t[100000];
int main() {
	
	int n;
	cin>>n;
	for(int i = 0;i < n;++i) {
		cin>>array[i];
	}
	int c = 0;
	for(int i = 0;i < n;++i) {
		if(array[i] != array[i+1]) {
			t[c++] = array[i];
		}
		
	}
	int ans = 0;
	for(int i = 1;i < c - 1;++i) {
		if(t[i] < t[i-1] && t[i] < t[i+1]) {
			ans++;
		} 
		
	}
	cout<<ans<<endl;
	return 0;
}
