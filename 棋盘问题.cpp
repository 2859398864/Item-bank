#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>


using namespace std;


int main() {
	
	long long x, y;
	cin>>x>>y;
	int ans1 = x * (x + 1) / 2 * y * (y + 1) / 2;
	int ans2 = 0;
	for(int i = 1;i <= min(x,y);++i ) {
		ans2 += (x - i + 1) * (y - i + 1);
	}
	cout<<ans2<<" "<<ans1-ans2<<endl;
	return 0;
}
