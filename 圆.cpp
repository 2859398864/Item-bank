#include<iostream>
#include<cmath>
#include<cstring>


using namespace std;

struct node {
	double x;
	double y;
	int r;
}p[100007];

int dis(double x, double y, node a){
	double d = sqrt((x - a.x ) * (x - a.x ) + (y - a.y ) * (y - a.y ));
	if(d < a.r) {
		return 1;
	} else {
		return 0;
	}
}
int main() {
	
	int n;
	cin>>n;
	for(int i = 0;i < n;++i) {
		cin>>p[i].x ;
	}
	for(int i = 0;i < n;++i) {
		cin>>p[i].y ;
	}
	for(int i = 0;i < n;++i) {
		cin>>p[i].r ;
	}
	double x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	int ans = 0;
	for(int i = 0;i < n;++i) {
		if(dis(x1,y1,p[i])) {
			ans++;
		}
		if(dis(x2,y2,p[i])) {
			ans++;
		}
		if(dis(x2,y2,p[i]) && dis(x1,y1,p[i])) {
			ans -= 2;
		}
	}
	cout<<ans<<endl;
	return 0;
}
