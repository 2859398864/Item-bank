#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main() {
	string a;
	string s = "";
	cin>>a;
	int num = a.length();
	s += a;
	for(int i = 0;i < num - 1;++i) {
		cin>>a;
		s += a;
	}
	int now = 0;
	char flag = '0';
	cout<<num<<" ";
	for(int i = 0;i < s.length();++i) {
		if(flag == s[i]) {
			now++;
		} else {
			cout<<now<<" ";
			flag = s[i];
			now = 1;
		}
	}
	if(now) {
		cout<<now;
	}
	return 0;
}

