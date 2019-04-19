#include<iostream>
#include<string.h>
using namespace std;
int now;
int ans;
int main() {
	string s;
	int t;
	cin>>t;
	for(int i = 0;i < t;++i) {
		ans = 0;
		now = 0;
		cin>>s;
		for(int j = 0;j < s.length() ;++j) {
			if(s[j] == 'O') {
				now ++;
				ans += now;
			} else {
				now = 0;
			}
		}
		cout<<ans<<endl;
	}	
	return 0;
}
