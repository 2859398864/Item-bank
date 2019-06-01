#include<iostream>
#include<cmath>
#include<cstring>


using namespace std;


int f(char *s, int len) {
	for(int i = 0;i < len;++i) {
		if(s[i] == '0') return 0;
	}
	return 1;
}

int main() {
	
	char s[10000];
	cin>>s;
	int len = strlen(s);
	int ans = 0;
	int k;
	if(len == 1) {
		if(s[0] == '0') {
			cout<<1<<endl;
			return 0;
		} else {
			cout<<0<<endl;
			return 0;
		}
	}
	while(!f(s,len)) {
		k = 1;
		char c = s[0];
		while(c == s[k]) {
			k++;
		}
		for(int i = 0;i < k;++i) {
			if(s[i] == '0') {
				s[i] = '1';
			} else {
				s[i] = '0';
			}
		}
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
