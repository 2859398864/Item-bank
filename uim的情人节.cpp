#include <iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;


int main() {
	char a[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int n;
	string s;
	string ans;
	cin>>n;
	for(int i = 0;i < n;++i) {
		char c;
		cin>>c;
		s += c;
	}
	int sum = 0;
	do {
		ans = "";
		for(int i = 1;i <= n;++i) {
			ans += a[i];
		}
		sum++;
		if(ans == s) {
			break;
		}
		
	}while(next_permutation(a+1,a+n+1));
	char an[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	do {
		ans = "";
		for(int i = 1;i <= n;++i) {
			ans += an[i];
		}
		sum--;
		if(sum == 1) {
			break;
		}
		
	}while(next_permutation(an+1,an+n+1));
	for(int i = 0;i < ans.size();++i) {
		if(i == 0) {
			cout<<ans[i];
		} else {
			cout<<" "<<ans[i];
		}
	}
	cout<<endl;
    return 0;
}
