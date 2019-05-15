#include<iostream>
#include<algorithm>
using namespace std;

/*


矩形数=正方形数+长方形数
先求出所有矩形的个数x，再求出正方形的个数y，则x-y即为长方形的个数。
所有矩形的个数x为 

 2    2
C    C     
 n+1  m+1

正方形的个数y为

从 i=1 到 min(n,m)  (n-i+1)(m-i+1)  的和 
 
*/
int main() {
	long long n, m;
	cin>>n>>m;
	long long x = n * (n + 1) / 2 * m * (m + 1) / 2;
	long long y = 0;
	int minn = min(n,m);
	for(int i = 1;i <= minn;++i) {
		y += (n - i + 1) * (m - i + 1);
	}
	cout<<y<<" "<<x-y<<endl;
	return 0;
}
