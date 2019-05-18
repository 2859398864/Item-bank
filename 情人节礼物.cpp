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
	cin>>n>>s;
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
	cout<<sum<<endl;
    return 0;
}
