#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

int main() {
	char s[5][5];
	int sum = 0;
	
	for(int i = 0;i < 3;++i) {
		for(int j = 0;j < 3;++j) {
			cin>>s[i][j];
			if(s[i][j] == 'O' || s[i][j] == 'X') {
				sum++;
			}
		}
	}
	if(sum == 0) {
		cout<<"Dont know."<<endl;
		cout<<0<<endl;
	} else if(sum == 1) {
		cout<<"Dont know."<<endl;
		cout<<1<<endl;
	} else if(sum == 2) {
		if(s[0][0] == 'X' || s[0][2] == 'X' || s[2][0] == 'X' || s[2][2] == 'X') {
			cout<<"Dont know."<<endl;
			cout<<2<<endl;
		} else {
			cout<<"xiaoa will win."<<endl;
			cout<<2<<endl;
		} 
	} else {
		if(s[0][1] == 'X') {
			if(s[0][0] == 'O' || s[0][2] == 'O') {
				cout<<"xiaoa will win."<<endl;
				cout<<3<<endl;
			}
		} else if(s[1][0] == 'X') {
			if(s[0][0] == 'O' || s[2][0] == 'O') {
				cout<<"xiaoa will win."<<endl;
				cout<<3<<endl;
			}
		} else if(s[2][1] == 'X') {
			if(s[2][0] == 'O' || s[2][2] == 'O') {
				cout<<"xiaoa will win."<<endl;
				cout<<3<<endl;
			}
		} else if(s[1][2] == 'X') {
			if(s[0][2] == 'O' || s[2][2] == 'O') {
				cout<<"xiaoa will win."<<endl;
				cout<<3<<endl;
			}
		} else {
			cout<<"Dont know."<<endl;
			cout<<3<<endl;
		}
		
	}
	return 0;
}
