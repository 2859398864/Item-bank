#include<iostream>
using namespace std;

/*
̰�� ������ķ����ߣ�˳���ߣ� 
������Լ�Ҫȥ�ķ����ǲ���ͬһ������
*/
int main() {
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	int t;
	cin>>t;
	char c;
	int sum = 0;
	for(int i = 0;i < t;++i) {
		cin>>c;
		if(c == 'N') {
			if(y1 < y2) {
				y1++;
				sum++;
			} 
		}
		if(c == 'S') {
			if(y1 > y2) {
				y1--;
				sum++;
			} 
		}
		if(c == 'E') {
			if(x1 < x2) {
				x1++;
				sum++;
			} 
		}
		if(c == 'W') {
			if(x1 > x2) {
				x1--;
				sum++;
			} 
		}
		if(x1 == x2 && y1 == y2) {
			cout<<sum<<endl;
			return 0;
		} 
	}
	cout<<-1<<endl;
	return 0;
}
