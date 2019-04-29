#include<iostream>
using namespace std;
struct node {
	int x;
	int y;
}p[30006];
int main() {
    int k, m, n;
    cin>>k>>m>>n;
    for(int i = 0;i < m;++i) {
    	cin>>p[i].x >>p[i].y ;
	}
	int flag = 0;
	for(int i = 0;i < m;++i) {
		if(p[i].x == 0 && p[i].y > 0) {
			cout<<i+1<<" ";
			flag = 1;
		} else {
			double x = k / p[i].x;
			if(x * p[i].y >= n) {
				flag = 1;
				cout<<i+1<<" ";
			} 
		}
	}
	if(!flag) {
		cout<<"-1"<<endl;
	}
    return 0;
}
